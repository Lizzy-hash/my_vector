cmake_minimum_required(VERSION 3.19)
project(my_vector)

set(CMAKE_CXX_STANDARD 14)

add_executable(my_vector
        main.cpp
        my_vector.h my_vector.cpp)
