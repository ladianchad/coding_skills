#include <shape/pentagon.h>

#include <iostream>
Pentagon::Pentagon(Color *color) : Shape(color){}

void Pentagon::show(){
    color_->applyColor();
    std::cout<<"pentagon"<<std::endl;
}