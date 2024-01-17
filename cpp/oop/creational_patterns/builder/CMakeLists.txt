cmake_minimum_required(VERSION 3.0.2)
project(builder)
set_directory_properties(PROPERTIES COMPILE_OPTIONS "-std=c++11;-Wall;-Werror")

include_directories(
  include
)

add_library(${PROJECT_NAME}
  src/single_type_product_builder.cpp
)

add_executable(builder_test1 src/builder_test1.cpp)
add_dependencies(builder_test1 ${PROJECT_NAME})
target_link_libraries(builder_test1 ${PROJECT_NAME})


add_executable(builder_test2 src/builder_test2.cpp)
add_dependencies(builder_test2 ${PROJECT_NAME})
target_link_libraries(builder_test2 ${PROJECT_NAME})

