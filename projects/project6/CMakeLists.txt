cmake_minimum_required(VERSION 3.8)
project(project6)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES Poly.c Poly.h Proj6Test.c)
add_executable(project6 ${SOURCE_FILES})