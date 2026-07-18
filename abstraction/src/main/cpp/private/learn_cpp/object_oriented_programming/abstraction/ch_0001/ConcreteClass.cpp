
#include "learn_cpp/object_oriented_programming/abstraction/ch_0001/AbstractClass.h"
#include "learn_cpp/object_oriented_programming/abstraction/ch_0001/ConcreteClass.h"

#include <stdexcept>

namespace learn_cpp::object_oriented_programming::abstraction::ch_0001 {

  /*static*/ double const ConcreteClass::m_PROTECTED_DOUBLE_Y = 1.1;
  /*static*/ short const ConcreteClass::m_PUBLIC_SHORT_Z = 65'000;

  ConcreteClass::ConcreteClass() : ConcreteClass('\0') { }
  
  ConcreteClass::ConcreteClass(char const x) : AbstractClass(0L) { 

    this->init(x);
  }

  void ConcreteClass::init(char const x) {

    this->set_private_char_x(x);
  }

  void ConcreteClass::set_private_char_x(char const x) {
    
    this->m_private_char_x = x;
  }

  char ConcreteClass::get_private_char_x() const {

    return this->m_private_char_x;
  }

  /*@Override*/
  void ConcreteClass::run() {

    this->m_protected_double_y += ConcreteClass::m_PROTECTED_DOUBLE_Y;

    throw std::logic_error("Not yet implemented");
  }
}