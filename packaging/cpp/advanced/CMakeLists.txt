cmake_minimum_required(VERSION 3.5)
project(dpkg_cpp_advanced_example)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


set(BUILD_SHARED_LIBS OFF)
include(FetchContent)

FetchContent_Declare(magic_enum
  GIT_REPOSITORY    https://github.com/Neargye/magic_enum.git
  SOURCE_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/magic_enum
)

FetchContent_Declare(glog
  GIT_REPOSITORY    https://github.com/google/glog.git
  SOURCE_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/glog
  GIT_TAG v0.6.0
)

FetchContent_GetProperties(glog)
if(NOT glog_POPULATED)
  FetchContent_Populate(glog)
  add_subdirectory(${glog_SOURCE_DIR} ${glog_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

FetchContent_GetProperties(magic_enum)
if(NOT magic_enum_POPULATED)
  FetchContent_Populate(magic_enum)
  add_subdirectory(${magic_enum_SOURCE_DIR} ${magic_enum_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()
set(BUILD_SHARED_LIBS TRUE)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC magic_enum::magic_enum glog::glog)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
)
