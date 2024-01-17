#include <sensor/lidar_sensor.h>

LidarSensor::LidarSensor() : Sensor("lidar sensor"){}

char LidarSensor::getData(int byte){
    return 'A' + byte;
}
