#ifndef LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_POLYMORPHISM_CH_0001_MUTATED_CHICKEN_H
#define LEARN_CPP_OBJECT_ORIENTED_PROGRAMMING_POLYMORPHISM_CH_0001_MUTATED_CHICKEN_H

#include "./IFlyable.h"

namespace learn_cpp::object_oriented_programming::polymorphism::ch_0001 {

  class MutatedChicken : public IFlyable {

    public: virtual bool can_fly() const override;
    public: virtual void fly() override;
  };
}

#endif