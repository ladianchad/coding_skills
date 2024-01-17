cmake_minimum_required(VERSION 3.0.2)
project(factory_method)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_library(${PROJECT_NAME}
  src/sensor/lidar_sensor.cpp
  src/sensor/sonar_sensor.cpp
  src/sensor_factory.cpp
)

add_executable(run src/test.cpp)
add_dependencies(run ${PROJECT_NAME})
target_link_libraries(run ${PROJECT_NAME})


