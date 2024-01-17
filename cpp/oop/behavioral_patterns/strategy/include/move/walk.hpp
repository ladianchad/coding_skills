#ifndef WALK_HPP
#define WALK_HPP
#include "move.hpp"

class Walk : public Move
{
public:
  Walk() {}
  void move() override;
};


#endif