cmake_minimum_required(VERSION 3.0.2)
project(adapter)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_library(${PROJECT_NAME}
  src/money/america/dollar.cpp
  src/money/korea/won.cpp
  src/money/korea/dollar_adapter.cpp
)

add_executable(test src/test.cpp)
add_dependencies(test ${PROJECT_NAME})
target_link_libraries(test ${PROJECT_NAME})

