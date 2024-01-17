#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <iostream>
#include "shape.hpp"

class Circle : public Shape
{
public:
  Circle();
  void draw() override;
};

Circle::Circle(/* args */)
{
  std::cout<<"circle created!!"<<std::endl;
}

void
Circle::draw()
{
  std::cout<<"draw circle!!"<<std::endl;
}

#endif