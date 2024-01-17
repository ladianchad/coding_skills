#include <sensor/sonar_sensor.h>

SonarSensor::SonarSensor() : Sensor("sonar sensor"){}

char SonarSensor::getData(int byte){
    return '0' + byte;
}