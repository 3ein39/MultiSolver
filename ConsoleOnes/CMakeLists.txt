cmake_minimum_required(VERSION 3.21)
project(ConsoleOnes)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(ConsoleOnes
        src/LogicDesign.cpp
        src/LogicDesign.h
        src/Project.cpp)
