cmake_minimum_required(VERSION 3.8)
project(GradeCalculator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header/Menu.h src/Menu.cpp)
add_executable(GradeCalculator ${SOURCE_FILES})