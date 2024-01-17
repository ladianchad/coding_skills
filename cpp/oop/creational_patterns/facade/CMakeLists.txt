cmake_minimum_required(VERSION 3.0.2)
project(facade)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_library(${PROJECT_NAME}
  src/camera.cpp
  src/lidar.cpp
  src/robot.cpp
)

add_executable(run src/main.cpp)
add_dependencies(run ${PROJECT_NAME})
target_link_libraries(run ${PROJECT_NAME})
