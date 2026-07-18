#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UTIL_ARG_TYPE_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UTIL_ARG_TYPE_H

#include <string_view>

namespace learn_cpp::object_oriented_programming::abstraction::test::util {

  enum class ArgType {
    UNKNOWN,
    UNIT,
    INTEGRATION,
    END_TO_END
  };

  ArgType parse_to_arg_type(std::string_view const& sv) {

    if(sv == "unit") return ArgType::UNIT;
    if(sv == "integration") return ArgType::INTEGRATION;

    return ArgType::UNKNOWN;
  }
}

#endif