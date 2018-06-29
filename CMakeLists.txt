cmake_minimum_required(VERSION 3.6)
project(DS)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Array.h Array.cpp LinkedList.h ListElement.cpp LinkedList.cpp Array2D.h Array2D.cpp Matrix.h Matrix.cpp)
add_executable(DS ${SOURCE_FILES})