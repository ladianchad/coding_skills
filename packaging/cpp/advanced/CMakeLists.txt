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

FetchContent_Declare(cpp_redis
  GIT_REPOSITORY    https://github.com/cpp-redis/cpp_redis.git
  SOURCE_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/cpp_redis
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

FetchContent_GetProperties(cpp_redis)
if(NOT cpp_redis_POPULATED)
  FetchContent_Populate(cpp_redis)
  execute_process(
    COMMAND git fetch origin pull/5/head:cmake-fixes
    WORKING_DIRECTORY ${cpp_redis_SOURCE_DIR}/tacopie
  )
  execute_process(
    COMMAND git checkout cmake-fixes
    WORKING_DIRECTORY ${cpp_redis_SOURCE_DIR}/tacopie
  )
  add_subdirectory(${cpp_redis_SOURCE_DIR} ${cpp_redis_BINARY_DIR})
endif()

set(BUILD_SHARED_LIBS TRUE)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC magic_enum::magic_enum glog::glog cpp_redis)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
)
