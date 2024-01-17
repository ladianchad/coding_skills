#ifndef ROBOT_H
#define ROBOT_H
#include <lidar.h>
#include <camera.h>

class Robot
{
public:
  struct Point
  {
    int x;
    int y;
  };
  
  Robot();
  Point getPosition();

private:
  Point calculateLidar(Lidar::Data data);
  Point calculateCamera(Camera::Data data);

  Lidar* lidar_ = nullptr;
  Camera* camera_ = nullptr;
};



#endif