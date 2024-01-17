#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "move/move.hpp"

class Character
{
public:
  Character(Move *move){
    moveStrategy = move;
  };
  ~Character(){};
  void setMoveStrategy(Move *move){
    moveStrategy = move;
  }
  void move(){
    moveStrategy->move();
  }
protected:
  Move *moveStrategy = nullptr;
};



#endif