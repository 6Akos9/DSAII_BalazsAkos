cmake_minimum_required(VERSION 3.25.2)
project(lab_01)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab_01 main.cpp Functions.cpp Functions.h ../lab-02/main.cpp)
