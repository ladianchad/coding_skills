cmake_minimum_required(VERSION 3.10.0)
project(cpp_stl_study)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

file(GLOB SUB_DIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${PROJECT_NAME}/*)
foreach(SUB_DIR ${SUB_DIRS})
  string(REPLACE "/" ";" SUB_DIR_FOLDERS ${SUB_DIR})  
  list(GET SUB_DIR_FOLDERS 1 SUB_PROJECT)
  set(SUB_PROJECT_DIR ${PROJECT_NAME}/${SUB_PROJECT})
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${SUB_PROJECT_DIR}/CMakeLists.txt)
    message("package detected : ${SUB_PROJECT}")
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
    add_subdirectory(${SUB_PROJECT_DIR})
  endif()
  
endforeach()


