#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_CH_0001_DERIVE_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_INHERITANCE_CH_0001_DERIVE_H

#include "./Base.h"

namespace learn_cpp::object_oriented_programming::inheritance::ch_0001 {

  class Derive final : public Base {

    public: explicit Derive();
    public: explicit Derive(long long const a);

    public: ~Derive() = default;

    public: void set_derive_a(long long const a);

    public: long long get_derive_a() const;

    public: uint8_t get_base_x() const override final;

    private: long long m_derive_a;
  };
}

#endif