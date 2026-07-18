#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0001_CONCRETE_CLASS_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0001_CONCRETE_CLASS_H

#include "learn_cpp/object_oriented_programming/abstraction/ch_0001/AbstractClass.h"

namespace learn_cpp::object_oriented_programming::abstraction::ch_0001 {

  class ConcreteClass : public AbstractClass {

    public: explicit ConcreteClass();
    public: explicit ConcreteClass(char const x);
    public: virtual ~ConcreteClass() = default;

    private: void init(char const x);

    /*@Override*/
    public: void run() override final;

    public: virtual void set_private_char_x(char const x);
    public: virtual char get_private_char_x() const;

    private: char m_private_char_x;
    protected: static double const m_PROTECTED_DOUBLE_Y;
    public: static short const m_PUBLIC_SHORT_Z;
  };
}

#endif
