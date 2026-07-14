#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ENCAPSULATION_CH_0001_CLASS_A_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ENCAPSULATION_CH_0001_CLASS_A_H

#include <cstdint> //REM: int64_t

namespace learn_cpp::object_oriented_programming::encapsulation::ch_0001 {

  class ClassA {
    public: explicit ClassA();
    public: explicit ClassA(float const x);
    public: virtual ~ClassA() = default;

    public: virtual void set_x(float const x);
    public: [[nodiscard]] virtual float get_x() const;

    private: float x;
    public: int y; 
    public: static int64_t /*long long*/ const Z; 
  };
} 

#endif