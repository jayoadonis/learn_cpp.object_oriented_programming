#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_TEST_UTILS_TEST_TYPE_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_TEST_UTILS_TEST_TYPE_H

#include <string_view>

namespace learn_cpp::object_oriented_programming::inheritance::test::util {

  enum class TestType {
    UNKNOWN,
    UNIT,
    INTEGRATION
  };

  TestType parse_to_test_type(std::string_view const & sv) {
    
    if(sv == "unit") return TestType::UNIT;
    if(sv == "integration") return TestType::INTEGRATION;

    return TestType::UNKNOWN;
  }
}

#endif