#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_CH_0001_BASE_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_CH_0001_BASE_H

#include <cstdint>

namespace learn_cpp::object_oriented_programming::inheritance::ch_0001 {

  class Base {

    public: explicit Base();
    public: explicit Base(uint8_t const x);

    public: virtual ~Base() = default;

    public: virtual void set_base_x(uint8_t const x);
    public: virtual uint8_t get_base_x() const;

    private: uint8_t /*unsigned char*/ m_base_x;
    public: float m_base_y;
    public: static double const m_BASE_Z;
    public: static long long const m_BASE_W;
  };
}

#endif