
#include <cstdio>
#include <string_view>
#include <exception>
#include <stdexcept>

#include "./util/TestType.h"
#include "./unit/entry.h"

using namespace learn_cpp::object_oriented_programming;

int main(int arg_c, char ** arg_v) {

  try{

    if(arg_c < 2) {
      throw std::invalid_argument("Invalid argument\nTry either 'unit' or 'integration'.");
    }

    switch(
      std::string_view option = arg_v[1]; 
      inheritance::test::util::parse_to_test_type(option)
    ) {

      case inheritance::test::util::TestType::UNIT:
        // std::printf("::: %.*s\n", static_cast<int>(option.size()), option.data());
        inheritance::test::unit::entry(arg_v);
        break;
      case inheritance::test::util::TestType::INTEGRATION:
        throw std::logic_error("'integration testing' not yet implemented.");
        break;
      case inheritance::test::util::TestType::UNKNOWN:
        [[fallthrough]];
      default:
        throw std::logic_error("Unknown Test Type, try either 'unit' or 'integration'.");
    }
  }
  catch(std::exception const & except) {
    std::fprintf(stderr, "Fatal error: %s\n", except.what());
    return 1;
  }
  catch(...) {
    std::fprintf(stderr, "Fatal error: Unknown error, something went wrong.\n");
    return 1;
  }

  std::printf("%s\n", "Done Testing");
  return 0;
}