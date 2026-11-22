cmake_minimum_required(VERSION 4.4)
project(tradebotV2)

set(CMAKE_CXX_STANDARD 20)

add_executable(tradebotV2 main.cpp
        services/connection.cpp
        services/headers/connection.h)
