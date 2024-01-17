#include <charector/charector.h>
#include <iostream>

Charactor::Charactor(Command *attack, Command *depence){
    attack_ = attack;
    depence_ = depence;
}

void Charactor::attack(){
    attack_->execute();
}

void Charactor::depence(){
    depence_->execute();
}

void Charactor::move(Direction dir){
    switch (dir)
    {
    case Direction::UP:
        std::cout<<"move to up!!"<<std::endl;
        break;
    case Direction::RIGHT:
        std::cout<<"move to right!!"<<std::endl;
        break;
    case Direction::LEFT :
        std::cout<<"move to left!!"<<std::endl;
        break;
    case Direction::DOWN:
        std::cout<<"move to down!!"<<std::endl;
        break;
    default:
        break;
    }
}