#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ENCAPSULATION_TEST_UNIT_TEST_0001_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ENCAPSULATION_TEST_UNIT_TEST_0001_H

#include <cstdio>
#include <cassert>
#include "learn_cpp/object_oriented_programming/encapsulation/ch_0001/ClassA.h"

namespace learn_cpp::object_oriented_programming::encapsulation::test::unit {

  static void test_0001_ctr() {

    using namespace learn_cpp::object_oriented_programming;
    
    encapsulation::ch_0001::ClassA c_a_0001{};

    assert(c_a_0001.get_x() == 0.0f);

    encapsulation::ch_0001::ClassA c_a_0002{1.0f};

    assert(c_a_0002.get_x() == 1.0f);
  }

  static void test_0001_setter() {

    using namespace learn_cpp::object_oriented_programming;

    encapsulation::ch_0001::ClassA c_a_0001{};

    c_a_0001.set_x(1.1f);

    assert(c_a_0001.get_x() == 1.1f);
  }
  
  void test_0001() {
    test_0001_ctr();
    test_0001_setter();
  }
}

#endif