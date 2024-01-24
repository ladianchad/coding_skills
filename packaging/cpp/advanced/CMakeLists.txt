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

include(FetchContent)
FetchContent_Declare(magic_enum
    GIT_REPOSITORY    https://github.com/Neargye/magic_enum.git
    SOURCE_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/magic_enum
)

FetchContent_Declare(glog
    GIT_REPOSITORY    https://github.com/google/glog.git
    SOURCE_DIR        ${CMAKE_CURRENT_SOURCE_DIR}/third_party/glog
)
FetchContent_MakeAvailable(glog magic_enum)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} magic_enum::magic_enum  glog::glog)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
)