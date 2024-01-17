#ifndef LINE_HPP
#define LINE_HPP
#include <iostream>
#include "shape.hpp"

class Line : public Shape
{
public:
  Line();
  void draw() override;
};

Line::Line(/* args */)
{
  std::cout<<"Line created!!"<<std::endl;
}

void
Line::draw()
{
  std::cout<<"draw Line!!"<<std::endl;
}

#endif