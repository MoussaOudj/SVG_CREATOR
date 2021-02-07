cmake_minimum_required(VERSION 3.17)
project(SVG_CREATOR)

set(CMAKE_CXX_STANDARD 98)

add_executable(SVG_CREATOR src/main.cpp src/Point.cpp headers/Point.h src/Circle.cpp headers/Circle.h src/Rect.cpp headers/Rect.h src/Triangle.cpp headers/Triangle.h headers/Shape.h src/SvgCreator.cpp headers/SvgCreator.h)