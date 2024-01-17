#ifndef PENTAGON_H
#define PENTAGON_H
#include <shape/shape.h>

class Pentagon : public Shape
{
public:
    Pentagon(Color *color);
    virtual void show() override;
};

#endif 