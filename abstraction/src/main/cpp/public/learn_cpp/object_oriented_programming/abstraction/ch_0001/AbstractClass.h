#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0001_ABSTRACT_CLASS_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_ABSTRACTION_CH_0001_ABSTRACT_CLASS_H

namespace learn_cpp::object_oriented_programming::abstraction::ch_0001 {

  class AbstractClass {

    public: explicit AbstractClass(long long const x);
    public: virtual ~AbstractClass() = default;

    private: void init(
      long long const x, 
      double const y
    );

    public: virtual /*abstract*/ void run() = 0;

    public: virtual void set_private_long_x(long long const x);
    public: virtual [[nodiscard]] long long get_private_long_x() const;

    private: mutable long long m_private_long_x;
    protected: double m_protected_double_y;
  };
}

#endif