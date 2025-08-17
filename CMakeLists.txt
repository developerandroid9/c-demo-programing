cmake_minimum_required(VERSION 3.31)
project(second_demo)

set(CMAKE_CXX_STANDARD 20)

add_executable(second_demo main.c functions.c pointer_functions.c arrays-functions.c
        structure-example.c
        struct-header.h)

