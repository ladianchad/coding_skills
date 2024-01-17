#ifndef ADDER_H
#define ADDER_H
#include <iostream>

class Adder
{
public:
    Adder() {};
    int execute(int a,int b){
        std::cout<<"add result : "<<a+b<<std::endl;
        return a+b;
    };
};

#endif