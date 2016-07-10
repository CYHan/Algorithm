cmake_minimum_required(VERSION 3.5)
project(Projects)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES acm_10815_number.cpp)
add_executable(Projects ${SOURCE_FILES})