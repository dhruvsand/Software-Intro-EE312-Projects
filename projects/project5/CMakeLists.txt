cmake_minimum_required(VERSION 3.8)
project(project5)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES Proj5Test.c String.h String.c)
add_executable(project5 ${SOURCE_FILES})