#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <shape/shape.h>

class Triangle : public Shape
{
public:
    Triangle(Color *color);
    virtual void show() override;
};

#endif 