cmake_minimum_required(VERSION 3.8)
project(project3)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES Rocketship.c)
add_executable(project3 ${SOURCE_FILES})