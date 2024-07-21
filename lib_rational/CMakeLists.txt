cmake_minimum_required(VERSION 3.10)
project(lib_rational)

add_library(lib_rational STATIC lib_rational.cpp)
target_include_directories(lib_rational PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
