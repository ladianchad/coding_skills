#ifndef CAR_HPP
#define CAR_HPP
#include "move.hpp"

class Car : public Move
{
public:
  Car() {};
  void move() override;
};

#endif