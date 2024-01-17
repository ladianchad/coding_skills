cmake_minimum_required(VERSION 3.10.0)
project(range_based_for)

include_directories(
  include
)

set(library_name ${PROJECT_NAME}_lib)
set(executable_name ${PROJECT_NAME})

# add_library(${library_name}
# )

add_executable(${executable_name} src/main.cpp)
# target_link_libraries(${executable_name} ${library_name})
