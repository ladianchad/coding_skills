#include <sensor_factory.h>
#include <iostream>

int main(int argc, char const *argv[])
{
    Sensor *sensor;
    SensorFactory factory;
    sensor = factory.getSensor(SensorFactory::Type::SONAR);
    std::cout << "sensor name : " << sensor->getName() << " sensor data : " << sensor->getData(5) << std::endl;
    sensor = factory.getSensor(SensorFactory::Type::LIDAR);
    std::cout << "sensor name : " << sensor->getName() << " sensor data : " << sensor->getData(5) << std::endl;
    return 0; 
}
