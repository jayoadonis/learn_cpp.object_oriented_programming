#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UNIT_TEST_0001_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UNIT_TEST_0001_H

#include <cassert>
#include "learn_cpp/object_oriented_programming/abstraction/ch_0001/ConcreteClass.h"

namespace learn_cpp::object_oriented_programming::abstraction::test::unit {

  namespace {

    void test_0001_concrete_class() {

      using namespace learn_cpp::object_oriented_programming;

      abstraction::ch_0001::ConcreteClass concrete_class{};

      assert(concrete_class.get_private_char_x() == '\0' 
        && "Expected to be '\0'");

      assert(concrete_class.get_private_long_x() == 1L 
        && "Expected to be '0'");
    }
  }

  void test_0001() {
    test_0001_concrete_class();
  }
}

#endif