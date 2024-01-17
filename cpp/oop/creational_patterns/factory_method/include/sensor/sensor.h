#ifndef SENSOR_H
#define SENSOR_H
#include <string>

class Sensor
{
public:
    Sensor(std::string name = "") : name_(name){};

    virtual char getData(int byte) = 0;

    std::string &getName(){
        return name_;
    }
protected:
    std::string name_;
};

#endif