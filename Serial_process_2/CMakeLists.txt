cmake_minimum_required(VERSION 3.5)
project(Serial_process_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Serial_process_2 ${SOURCE_FILES})