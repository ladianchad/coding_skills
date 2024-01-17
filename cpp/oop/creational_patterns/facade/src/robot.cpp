#include <robot.h>
#include <iostream>

Robot::Robot() {
  camera_ = new Camera();
  lidar_ = new Lidar();
}


Robot::Point Robot::calculateLidar(Lidar::Data data){
  std::cout<<"lidar operation..."<<std::endl;
  return Point();
}

Robot::Point Robot::calculateCamera(Camera::Data data){
  std::cout<<"camera operation..."<<std::endl;
  return Point();
}

Robot::Point Robot::getPosition(){
  Point point;
  if(lidar_){
    point = calculateLidar(lidar_->getData());
  }
  if(camera_){
    point = calculateCamera(camera_->getData());
  }
  return point;
}