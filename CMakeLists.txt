cmake_minimum_required(VERSION 3.6)
project(DS)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Array.h Array.cpp)
add_executable(DS ${SOURCE_FILES})