#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_POLYMORPHISM_CH_0001_IFYABLE_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_POLYMORPHISM_CH_0001_IFYABLE_H

namespace learn_cpp::object_oriented_programming::polymorphism::ch_0001 {

  class IFlyable {

    public: virtual ~IFlyable() = default;
    
    public: virtual bool can_fly() const = 0;
    public: virtual void fly() = 0;
  };
}

#endif