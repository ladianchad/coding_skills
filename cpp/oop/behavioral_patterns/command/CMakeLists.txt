cmake_minimum_required(VERSION 3.0.2)
project(command_study)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_library(${PROJECT_NAME}
  src/charector/charector.cpp
  src/command/attack/attack.cpp
  src/command/attack/magic_attack.cpp
  src/command/depence/depence.cpp
  src/command/depence/magic_depence.cpp
)

add_executable(run src/test.cpp)
add_dependencies(run ${PROJECT_NAME})
target_link_libraries(run ${PROJECT_NAME})


