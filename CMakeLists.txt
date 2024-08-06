cmake_minimum_required(VERSION 3.28)
project(filecompression)

set(CMAKE_CXX_STANDARD 17)

add_executable(filecompression main.cpp
        constants/CommandOptions.h)
