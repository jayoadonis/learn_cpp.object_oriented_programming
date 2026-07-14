

#include <cstdio>
#include <stdexcept>

#include "./ch_0001/ClassA.h"

int main(int arg_c, char** arg_v) {

  std::printf("%s\n", "Hi there.");

  try {
    learn_cpp::object_oriented_programming::
      encapsulation::ch_0001::ClassA cA{};

    std::printf("x=%.2f, y=%d, Z=%lld\n", 
      cA.get_x(), cA.y, 
      learn_cpp::object_oriented_programming::
      encapsulation::ch_0001::ClassA::Z);

    cA.set_x(1.0f);
    cA.y = 1;

    std::printf("x=%.2f, y=%d, Z=%lld\n", 
      cA.get_x(), cA.y, 
      learn_cpp::object_oriented_programming::
      encapsulation::ch_0001::ClassA::Z);
  } 
  catch(std::invalid_argument const &except) {

    std::printf("%s\n", except.what());
  }

  return 0;
}