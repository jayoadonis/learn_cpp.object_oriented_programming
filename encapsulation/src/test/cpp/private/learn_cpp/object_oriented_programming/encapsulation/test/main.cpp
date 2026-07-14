
#include <cstdio>
#include <exception>
#include <stdexcept>
#include <string>
#include "./unit/entry.h"

// void our_terminate_handler() {
//   if (auto ep = std::current_exception()) {
//     try {
//       std::rethrow_exception(ep);
//     }
//     catch (const std::exception& e) {
//       std::printf("Fatal Crash: %s\n", e.what());
//     }
//     catch (...) {
//       std::printf("Fatal Crash: Unknown exception type\n");
//     }
//   }
//   std::abort();
// }

int main(int arg_c, char** arg_v) {

  using namespace std::string_view_literals;

  try {
    // std::set_terminate(our_terminate_handler);

    if (arg_c < 2) {

      throw std::invalid_argument("Incomplete test argument\nTry either 'unit' or 'integration'.");
    }

    std::string_view option
      = static_cast<std::string_view>(arg_v[1]);

    if (option == "unit"sv) {
      //REM: With `ctest` do `-L unit_test`
      learn_cpp::object_oriented_programming::
        encapsulation::test::unit::entry(arg_v);
    }
    else if (option == "integration"sv) {

      throw std::logic_error("'integration test' not yet implemented");
    }
  }
  catch (std::exception const& except) {

    std::fprintf(stderr,
      "Fatal Crash: %s\n", except.what());
    return 1;
  }
  catch (...) {

    std::fprintf(stderr,
      "Fatal Crash: Unknown exception type\n");
    return 1;
  }

  std::printf("%s\n", "Done testing");
  return 0;
}