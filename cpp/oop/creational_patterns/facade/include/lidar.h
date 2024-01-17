#ifndef LIDAR_H
#define LIDAR_H

#include <iostream>
#include <vector>

class Lidar
{
public:
  using Data = std::vector<int>;
  Lidar();
  Data getData();
};

#endif