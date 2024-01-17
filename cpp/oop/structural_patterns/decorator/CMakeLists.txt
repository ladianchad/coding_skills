cmake_minimum_required(VERSION 3.0.2)
project(decorator)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

# add_library(${PROJECT_NAME}
#   src/color/blue.cpp
#   src/color/red.cpp
#   src/shape/triangle.cpp
#   src/shape/pentagon.cpp
# )

add_executable(run src/main.cpp)
# add_dependencies(run ${PROJECT_NAME})
# target_link_libraries(run ${PROJECT_NAME})

