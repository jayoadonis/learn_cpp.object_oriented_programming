```cpp
//REM: Diagnostics.hpp
#pragma once
#include <stdexcept>
#include <stacktrace>
#include <string>
#include <sstream>

namespace App::Diagnostics {

    class TraceableException : public std::runtime_error {
    private:
        std::stacktrace m_trace;
        mutable std::string m_full_message; //REM: Lazily cached formatted message

    public:
        //REM: Capture trace automatically on creation
        explicit TraceableException(const std::string& message)
            : std::runtime_error(message), 
              m_trace(std::stacktrace::current(/*skip*/1)) {} //REM: Skip constructor frame

        //REM: Access the raw stacktrace safely
        const std::stacktrace& trace() const noexcept { return m_trace; }

        //REM: Overriding what() to provide a beautifully formatted crash dump
        const char* what() const noexcept override {
            try {
                if (m_full_message.empty()) {
                    std::ostringstream oss;
                    oss << std::runtime_error::what() << "\n--- BACKTRACE ---\n";
                    
                    int idx = 0;
                    for (const auto& entry : m_trace) {
                        oss << "#" << idx++ << " " << (entry.description().empty() ? "<unknown>" : entry.description()) << "\n"
                           << "\tat " << (entry.source_file().empty() ? "<source>" : entry.source_file()) 
                           << ":" << entry.source_line() << "\n";
                    }
                    m_full_message = oss.str();
                }
                return m_full_message.c_str();
            } catch (...) {
                return std::runtime_error::what(); //REM: Fallback if formatting throws bad_alloc
            }
        }
    };

    //REM: Specific Domain Errors inherit from our Traceable base
    class DatabaseError : public TraceableException {
        using TraceableException::TraceableException;
        //REM: similar to
        // public: explicit DatabaseError(std::string const & msg) : TraceableException(msg) { }
    };
}

```