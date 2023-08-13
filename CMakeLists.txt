cmake_minimum_required(VERSION 3.26)
project(hello_world_etc)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello_world_etc src/main.cpp
        src/InputOutputPractice.cpp
        src/InputOutputPractice.h
        src/stringyPractice.cpp
        src/stringyPractice.h
        src/CodilityPractice.cpp
        src/CodilityPractice.h)
