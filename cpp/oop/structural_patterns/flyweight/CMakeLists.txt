cmake_minimum_required(VERSION 3.0.2)
project(flyweight)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_executable(run src/main.cpp)

