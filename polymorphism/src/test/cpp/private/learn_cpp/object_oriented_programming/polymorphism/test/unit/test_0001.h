#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_POLYMORPHISM_TEST_UNIT_TEST_0001_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_POLYMORPHISM_TEST_UNIT_TEST_0001_H

#include <vector>
#include <cassert>
#include "learn_cpp/object_oriented_programming/polymorphism/ch_0001/ClassicChicken.h"
#include "learn_cpp/object_oriented_programming/polymorphism/ch_0001/MutatedChicken.h"
#include "learn_cpp/object_oriented_programming/polymorphism/ch_0001/IFlyable.h"

namespace learn_cpp::object_oriented_programming::polymorphism::test::unit {

  namespace {

    void test_0001_flyable() {

      using namespace learn_cpp::object_oriented_programming;

      polymorphism::ch_0001::ClassicChicken classic_chick{};

      assert(classic_chick.can_fly() == false && "Expected to be a type of <bool> and value of 'false'");

      polymorphism::ch_0001::IFlyable* ptr_flyable_chicken = &classic_chick;

      assert((*ptr_flyable_chicken).can_fly() == false && "Expected to be a type of <bool> and value of 'false'");

      polymorphism::ch_0001::MutatedChicken mutated_chick{};

      assert(mutated_chick.can_fly() == true && "Expected to be a type of <bool> and value of 'false'");
      
      ptr_flyable_chicken = &mutated_chick;

      assert((*ptr_flyable_chicken).can_fly() == true && "Expected to be a type of <bool> and value of 'false'");
    }
  }

  void test_0001_list_flyable() {

    using namespace learn_cpp::object_oriented_programming;

    std::vector<polymorphism::ch_0001::IFlyable *> chicks = {
      new polymorphism::ch_0001::ClassicChicken(),
      new polymorphism::ch_0001::MutatedChicken()
    };

    for(polymorphism::ch_0001::IFlyable const * ptr_chick : chicks) {

      if(ptr_chick != nullptr) {

        std::printf("test_0001_list_flyable: %d\n", ptr_chick->can_fly());
        // ptr_chick->fly();
      }
    }

    for(polymorphism::ch_0001::IFlyable const * ptr_chick : chicks) {

      delete ptr_chick;
    }
  }

  void test_0001() {

    test_0001_flyable();
    test_0001_list_flyable();
  }
}
#endif