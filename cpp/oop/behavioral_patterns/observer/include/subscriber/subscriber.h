#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H
#include <string>

template<class T>
class Subscriber
{
public:
    Subscriber(std::string name) : name_(name){}
    virtual void update(const T& data) = 0;
    
protected:
    std::string name_;
};

#endif