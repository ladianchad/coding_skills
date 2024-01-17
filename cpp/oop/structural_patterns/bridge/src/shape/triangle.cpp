#include <shape/triangle.h>
#include <iostream>
Triangle::Triangle(Color *color) : Shape(color){}

void Triangle::show(){
    color_->applyColor();
    std::cout<<"triangle"<<std::endl;
}