cmake_minimum_required(VERSION 3.0.2)
project(chain_of_responsibility)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_library(${PROJECT_NAME}
  src/custom_error.cpp
  src/case_one_handler.cpp
  src/case_two_handler.cpp
)

add_executable(run src/test.cpp)
add_dependencies(run ${PROJECT_NAME})
target_link_libraries(run ${PROJECT_NAME})


