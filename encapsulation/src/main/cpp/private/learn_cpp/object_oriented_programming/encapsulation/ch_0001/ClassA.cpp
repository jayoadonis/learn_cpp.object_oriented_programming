
#include <stdexcept>
#include <cstdint> //REM: int64_t
#include "./ClassA.h"

namespace learn_cpp::object_oriented_programming::encapsulation::ch_0001 {

  /*static*/ int64_t /*long long*/ const ClassA::Z = 1L;

  ClassA::ClassA() : ClassA{0.0f} { }

  ClassA::ClassA(float const x) : y{0} {
    this->set_x(x);
  }

  void ClassA::set_x(float const x) {
    if (x < 0.0f) {
      throw std::invalid_argument("Value for 'x' cannot be negative!");
    }
    this->x = x;
  }

  float ClassA::get_x() const {
    return this->x;
  }
}