#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_TEST_UNIT_TEST_0001_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_TEST_UNIT_TEST_0001_H

#include <cassert>
#include <string>

#include "learn_cpp/object_oriented_programming/inheritance/ch_0001/Base.h"
#include "learn_cpp/object_oriented_programming/inheritance/ch_0001/Derive.h"
#include "learn_cpp/object_oriented_programming/inheritance/func_i.h"

using namespace std::string_literals;

namespace learn_cpp::object_oriented_programming::inheritance::test::unit {

  namespace /*private*/ {

    void test_0001_func_i() {
      using namespace learn_cpp::object_oriented_programming;

      inheritance::func_i();
    }

    void test_0001_base() {

      using namespace learn_cpp::object_oriented_programming;

      inheritance::ch_0001::Base b{};

      assert(b.get_base_x() == '\0');
      assert(b.m_base_y == 0.0f);
      assert(inheritance::ch_0001::Base::m_BASE_Z == 0.0);
      assert(inheritance::ch_0001::Base::m_BASE_W == 0L);

      b.set_base_x(99);
      b.m_base_y = 1.0f;

      assert(b.get_base_x() == 99);
      assert(b.m_base_y == 1.0f);
    }

    void test_0001_derive() {

      using namespace learn_cpp::object_oriented_programming;

      inheritance::ch_0001::Derive d{};

      assert(d.get_derive_a() == 0L && "Expected to be 0L");
      assert(d.m_base_y == 0.0f);
      assert(d.get_base_x() == '\0');

      assert(inheritance::ch_0001::Derive::m_BASE_Z == 0.0
        && "Expected a value of 0.0");
      assert(inheritance::ch_0001::Derive::m_BASE_W == 0L
        && "Expected a value of 0L");

      d.set_derive_a(1L);
      d.set_base_x('A');
      d.m_base_y = 1.0f;

      assert(d.get_derive_a() == 1L);
      assert(d.get_base_x() == 'B');
      assert(d.m_base_y == 1.0f);
    }
  }

  void test_0001() {
    test_0001_func_i();
    test_0001_base();
    test_0001_derive();
  }
}
#endif