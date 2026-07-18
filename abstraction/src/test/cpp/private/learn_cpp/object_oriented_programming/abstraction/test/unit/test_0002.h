#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UNIT_TEST_0002_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_TEST_UNIT_TEST_0002_H

#include "learn_cpp/object_oriented_programming/abstraction/ch_0002/ConcreteClass.h"

namespace learn_cpp::object_oriented_programming::abstraction::test::unit {

  namespace {

    void test_0002_interface() {

      using namespace learn_cpp::object_oriented_programming;

      abstraction::ch_0002::ConcreteClass concrete_class{};

      concrete_class.run();
    }
  }

  void test_0002() {

    test_0002_interface();
  }
}

#endif