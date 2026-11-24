cmake_minimum_required(VERSION 4.4)
project(tradebotV2)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib/cpr)

add_executable(tradebotV2 main.cpp
        api/get_candles_data.cpp
        api/headers/get_candles_data.h)

target_link_libraries(tradebotV2 PRIVATE cpr::cpr)