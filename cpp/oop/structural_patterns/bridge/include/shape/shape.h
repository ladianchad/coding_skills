#ifndef SHAPE_H
#define SHAPE_H
#include <color/color.h>

class Shape
{
public:
    Shape(Color *color){
        color_ = color;
    };
    virtual void show() = 0;
protected:
    Color *color_;
};


#endif