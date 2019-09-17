cmake_minimum_required(VERSION 3.8)
project(project9)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES EvilHangmanGame.cpp EvilHangmanGame.h RunEvilHangman.cpp )
add_executable(project9 ${SOURCE_FILES})