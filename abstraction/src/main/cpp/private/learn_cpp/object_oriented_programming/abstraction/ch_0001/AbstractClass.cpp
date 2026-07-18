
#include "learn_cpp/object_oriented_programming/abstraction/ch_0001/AbstractClass.h"

namespace learn_cpp::object_oriented_programming::abstraction::ch_0001 {

  AbstractClass::AbstractClass(long long const x) {
    
    this->init(x, 0.0);
  }

  void AbstractClass::init(
    long long const x,
    double const y
  ) {

    this->set_private_long_x(x);
    this->m_protected_double_y = y;
  }

  void AbstractClass::set_private_long_x(long long const x) {

    this->m_private_long_x = x;
  }

  long long AbstractClass::get_private_long_x() const {

    return this->m_private_long_x += 1L;
  }

}