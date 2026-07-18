#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0002_INTERFACE_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0002_INTERFACE_H

namespace learn_cpp::object_oriented_programming::abstraction::ch_0002 {

  class Interface {

    public: virtual /*abstract*/ void run() = 0;

    public: static long long const m_Y;
  };
}

#endif