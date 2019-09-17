cmake_minimum_required(VERSION 3.8)
project(project4)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES cipher.c)
add_executable(project4 ${SOURCE_FILES} cipher.c)