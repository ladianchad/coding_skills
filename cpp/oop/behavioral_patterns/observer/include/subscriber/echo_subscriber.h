#ifndef ECHO_SUBSCRIBER_H
#define ECHO_SUBSCRIBER_H
#include <subscriber/subscriber.h>
#include <iostream>

template<class T>
class EchoSubscriber :  public Subscriber<T>
{
public:
    EchoSubscriber(std::string name) : Subscriber<T>(name) {};

    virtual void update(const T& data) override{
        std::cout<<Subscriber<T>::name_ <<" data : "<<data<<std::endl;
    };
};


#endif