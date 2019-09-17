cmake_minimum_required(VERSION 3.8)
project(ee312)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES CodeCamp.c CodeCampTester.c)
add_executable(ee312 ${SOURCE_FILES})