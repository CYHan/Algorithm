cmake_minimum_required(VERSION 3.5)
project(ssiba)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Serial.cpp SerialUtil.cpp Serial.h SerialUtil.h)
add_executable(ssiba ${SOURCE_FILES})