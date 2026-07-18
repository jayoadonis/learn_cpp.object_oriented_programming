#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UNIT_ENTRY_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UNIT_ENTRY_H

#include <cstdio>
#include "./test_0001.h"
#include "./test_0002.h"

namespace learn_cpp::object_oriented_programming::abstraction::test::unit {

  void entry(char** arg_v) {

    test_0001();
    test_0002();
    std::printf("%s\n", "Hi from unit test entry.");
  }
}

#endif