#ifndef LIDAR_SENSOR_H
#define LIDAR_SENSOR_H
#include <sensor/sensor.h>
class LidarSensor : public Sensor
{
public:
    LidarSensor();

    virtual char getData(int byte) override;
};

#endif

