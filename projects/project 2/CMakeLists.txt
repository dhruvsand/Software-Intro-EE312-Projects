cmake_minimum_required(VERSION 3.8)
project(project_2)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES Song.c)
add_executable(project_2 ${SOURCE_FILES})