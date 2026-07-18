
#include <cstdio>
#include <stdexcept>
#include <string>
#include <string_view>
#include "learn_cpp/object_oriented_programming/abstraction/test/unit/entry.h"
#include "learn_cpp/object_oriented_programming/abstraction/test/util/ArgType.h"

int main(int arg_c, char** arg_v) {

  try {

    using namespace learn_cpp::object_oriented_programming;

    if(arg_c < 2) throw std::invalid_argument("Try either 'unit' or 'integration'");

    switch(std::string_view option = arg_v[1];
      abstraction::test::util::parse_to_arg_type(option)
    ) {

      case abstraction::test::util::ArgType::UNIT:
        abstraction::test::unit::entry(arg_v);
        break;
      
      case abstraction::test::util::ArgType::INTEGRATION:
        throw std::logic_error("'integration testing' not yet implemented.");
        break;

      case abstraction::test::util::ArgType::UNKNOWN:
        [[fallthrough]];
      default:
        throw std::invalid_argument("Unknown argument: " + std::string(option));
    }
  }
  catch(std::exception const &except) {

    std::fprintf(stderr, "Fatal Error: %s\n", except.what());
    return 1;
  }
  catch(...) {

    std::fprintf(stderr, "Fatal Error: unknown error, something went wrong.\n");
    return 1;
  }

  std::printf("%s\n", "Done testing.");
  return 0;
}