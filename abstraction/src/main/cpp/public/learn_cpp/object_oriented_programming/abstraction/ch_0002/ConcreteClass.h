#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0002_CONCRETE_CLASS_H
#define  LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0002_CONCRETE_CLASS_H

#include "learn_cpp/object_oriented_programming/abstraction/ch_0002/Interface.h"

namespace learn_cpp::object_oriented_programming::abstraction::ch_0002 {

  class ConcreteClass : public Interface {

    public: explicit ConcreteClass() = default;
    public: virtual ~ConcreteClass() = default;
    
    /*@Override*/
    public: virtual void run() override;
  };
}

#endif