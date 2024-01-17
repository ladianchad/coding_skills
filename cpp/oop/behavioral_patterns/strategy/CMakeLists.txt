cmake_minimum_required(VERSION 3.0.2)
project(strategy)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_library(move
  src/move/walk.cpp
  src/move/car.cpp
)

add_executable(run src/main.cpp)
target_link_libraries(run move)


