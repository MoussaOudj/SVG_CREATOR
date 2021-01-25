cmake_minimum_required(VERSION 3.17)
project(SVG_CREATOR)

set(CMAKE_CXX_STANDARD 98)

add_executable(SVG_CREATOR main.cpp Point.cpp Point.h Shape/Circle.cpp Shape/Circle.h Shape/Rect.cpp Shape/Rect.h Shape/Triangle.cpp Shape/Triangle.h)