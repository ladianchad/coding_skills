#ifndef SENSOR_FACTORY_H
#define SENSOR_FACTORY_H
#include <sensor/sensor.h>
#include <sensor/lidar_sensor.h>
#include <sensor/sonar_sensor.h>

class SensorFactory
{
public:
    enum Type{
        SONAR,
        LIDAR
    };
    Sensor *getSensor(SensorFactory::Type type);
};


#endif