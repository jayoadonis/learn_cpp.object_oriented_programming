
#include "learn_cpp/object_oriented_programming/inheritance/ch_0001/Derive.h"

namespace learn_cpp::object_oriented_programming::inheritance::ch_0001 {

  Derive::Derive() : Derive(0L) { }

  Derive::Derive(long long const a) 
  : Base() { 

    this->set_derive_a(a);
  }

  void Derive::set_derive_a(long long const a) {
    
    this->m_derive_a = a;
  }
  
  long long Derive::get_derive_a() const {

    return this->m_derive_a;
  }

  /**@Override */
  uint8_t Derive::get_base_x() const {

    return Base::get_base_x() + static_cast<uint8_t>(this->m_derive_a);
  }
}