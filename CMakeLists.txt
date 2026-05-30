cmake_minimum_required(VERSION 3.21)

project(AngleLock)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    GD_VERSION android 2.208
    SOURCES src/main.cpp
)
