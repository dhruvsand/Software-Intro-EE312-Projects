cmake_minimum_required(VERSION 3.8)
project(project8)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp StringPlusPlus.cpp StringPlusPlus.h)
add_executable(project8 ${SOURCE_FILES})