cmake_minimum_required(VERSION 3.10)
project(rational_poly)

add_executable(rational_poly rational_poly.cpp)
target_link_libraries(rational_poly lib_rational)
target_include_directories(rational_poly PUBLIC ${CMAKE_SOURCE_DIR}/lib_rational)
