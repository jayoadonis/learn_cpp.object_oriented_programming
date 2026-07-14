```bash
std::exception                          #REM: <exception>   (C++98)  – base class for all standard exceptions
│
├── std::logic_error                    #REM: <stdexcept>   (C++98)  – errors that could be detected by static analysis (programming errors)
│   ├── std::invalid_argument           #REM: <stdexcept>   (C++98)  – invalid argument passed to a function
│   ├── std::domain_error               #REM: <stdexcept>   (C++98)  – argument outside the valid domain of a function
│   ├── std::length_error               #REM: <stdexcept>   (C++98)  – attempt to create an object whose size exceeds the maximum allowed
│   ├── std::out_of_range               #REM: <stdexcept>   (C++98)  – access beyond valid range (e.g., std::vector::at)
│   └── std::future_error               #REM: <future>      (C++11)  – error related to std::future or std::shared_future
│
├── std::runtime_error                  #REM: <stdexcept>   (C++98)  – errors that can only be detected at runtime
│   ├── std::range_error                #REM: <stdexcept>   (C++98)  – result of a computation cannot be represented as the destination type
│   ├── std::overflow_error             #REM: <stdexcept>   (C++98)  – arithmetic overflow
│   ├── std::underflow_error            #REM: <stdexcept>   (C++98)  – arithmetic underflow
│   ├── std::system_error               #REM: <system_error> (C++11)  – system‑level error that carries an std::error_code
│   │   ├── std::ios_base::failure      #REM: <ios>         (C++11)  – I/O stream failure (derives from system_error since C++11)
│   │   └── std::filesystem::filesystem_error  #REM: <filesystem> (C++17)  – filesystem operation error
│   ├── std::regex_error                #REM: <regex>       (C++11)  – errors from the regular expressions library
│   ├── std::format_error               #REM: <format>      (C++20)  – string formatting error (std::format, etc.)
│   ├── std::chrono::nonexistent_local_time  #REM: <chrono> (C++20)  – a local time that does not exist (e.g., skipped DST transition)
│   └── std::chrono::ambiguous_local_time    #REM: <chrono> (C++20)  – a local time that is ambiguous (e.g., repeated DST transition)
│
├── std::bad_alloc                      #REM: <new>         (C++98)  – failure to allocate memory
│   └── std::bad_array_new_length       #REM: <new>         (C++11)  – array new with invalid (negative or too large) size
│
├── std::bad_cast                       #REM: <typeinfo>    (C++98)  – failed dynamic_cast on a reference type
├── std::bad_typeid                     #REM: <typeinfo>    (C++98)  – applying typeid to a null dereferenced pointer
├── std::bad_exception                  #REM: <exception>   (C++98)  – thrown when an unexpected exception escapes a function (deprecated)
│
├── std::bad_weak_ptr                   #REM: <memory>      (C++11)  – constructing a std::shared_ptr from an expired std::weak_ptr
├── std::bad_function_call              #REM: <functional>  (C++11)  – invoking an empty std::function object
├── std::bad_optional_access            #REM: <optional>    (C++17)  – accessing the value of an empty std::optional
├── std::bad_variant_access             #REM: <variant>     (C++17)  – accessing an invalid alternative of a std::variant
│
└── std::bad_expected_access<void>      #REM: <expected>    (C++23)  – base class for bad access to std::expected
    └── std::bad_expected_access<E>     #REM: <expected>    (C++23)  – accessing the value of a std::expected that contains an error
```