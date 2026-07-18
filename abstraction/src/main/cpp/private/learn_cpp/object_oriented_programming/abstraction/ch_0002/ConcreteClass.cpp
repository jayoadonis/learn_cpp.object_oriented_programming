#include "learn_cpp/object_oriented_programming/abstraction/ch_0002/ConcreteClass.h"

#include <cstdio>

namespace learn_cpp::object_oriented_programming::abstraction::ch_0002 {

  void ConcreteClass::run() {

    std::printf("::: %lld\n", ConcreteClass::m_Y);
  }
}