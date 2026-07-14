#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ENCAPSULATION_TEST_UNIT_ENTRY_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ENCAPSULATION_TEST_UNIT_ENTRY_H

#include "./test_0001.h"

namespace learn_cpp::object_oriented_programming::encapsulation::test::unit {

  void entry(char ** arg_v) {

    using namespace learn_cpp::object_oriented_programming;

    encapsulation::test::unit::test_0001();
  }
}
#endif