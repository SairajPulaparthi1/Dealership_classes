cmake_minimum_required(VERSION 3.29)
project(dealership_classes)

set(CMAKE_CXX_STANDARD 20)

add_executable(dealership_classes main.cpp
        Vehicle.h
        Vehicle.cpp
        Showroom.h
        Showroom.cpp
        Dealership.cpp
        Dealership.h)
