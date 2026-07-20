#include <cstdio>
#include "./unit/entry.h"

int main(int arg_c, char** arg_v) {


  try {

    using namespace learn_cpp::object_oriented_programming;

    polymorphism::test::unit::entry(arg_c, arg_v);
  }
  catch(...) {

    std::fprintf(stderr, "Fatal error: Something went wrong.");
    return 1;
  }
  
  std::fprintf(stdout, "%s\n", "Hi there from test.");
  return 0;
}