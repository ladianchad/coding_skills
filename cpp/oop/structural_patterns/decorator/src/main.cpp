#include <decorator/time_decorator.hpp>
#include <view.hpp>
#include <adder.hpp>
#include <iostream>
#define DEBUG
int main(int argc, char const *argv[])
{
    #ifdef DEBUG
        std::cout<<"debug mode"<<std::endl;
        TimeDecorator<View> view;
        TimeDecorator<Adder> adder;
    #else
        View view;
        Adder adder;
    #endif

    view.execute(10);
    adder.execute(10,20);

    return 0;
}
