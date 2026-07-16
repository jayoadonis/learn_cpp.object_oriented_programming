
#include "learn_cpp/object_oriented_programming/inheritance/ch_0001/Base.h"

namespace learn_cpp::object_oriented_programming::inheritance::ch_0001 {

  /*static*/ double const Base::m_BASE_Z = 0.0;
  /*static*/ long long const Base::m_BASE_W = 0L;

  Base::Base() : Base('\0') { }

  Base::Base(uint8_t const x) {
    this->set_base_x(x);
    this->m_base_y = 0.0f;
  }

  void Base::set_base_x(uint8_t const x) {
    this->m_base_x = x;
  }

  uint8_t Base::get_base_x() const {
    return this->m_base_x;
  }
}