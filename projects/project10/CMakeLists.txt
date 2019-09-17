cmake_minimum_required(VERSION 3.8)
project(project10)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Card.cpp Card.h Hand.cpp Deck.cpp Deck.h Hand.h playWar.cpp)
add_executable(project10 ${SOURCE_FILES})