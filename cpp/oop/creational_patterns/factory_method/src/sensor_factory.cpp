#include <sensor_factory.h>

Sensor *SensorFactory::getSensor(SensorFactory::Type type){
    if(type == Type::SONAR){
        return new SonarSensor();
    }
    else if(type == Type::LIDAR){
        return new LidarSensor();
    } 
    return nullptr;
}