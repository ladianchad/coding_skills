#ifndef SONAR_SENSOR_H
#define SONAR_SENSOR_H
#include <sensor/sensor.h>
class SonarSensor : public Sensor
{
public:
    SonarSensor();
    virtual char getData(int byte) override;
};

#endif

