#ifndef CAMERA_H
#define CAMERA_H
#include <vector>
#include <iostream>
class Camera
{
public:
  using Data = std::vector<std::vector<int>>;
  Camera();
  Data getData();
};

#endif