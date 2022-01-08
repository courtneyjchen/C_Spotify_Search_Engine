cmake_minimum_required(VERSION 3.12)
project(program2)

set(CMAKE_CXX_STANDARD 14)

add_executable(program2 main.cpp functions.cpp functions.h)
add_executable(program2_test test.cpp functions.cpp functions.h)