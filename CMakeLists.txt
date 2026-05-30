cmake_minimum_required(VERSION 3.21)

project(AngleLock)

# Find and initialize the Geode framework package
find_package(Geode REQUIRED)

# Define our mod binary and link the source files
add_geode_mod(
    ${PROJECT_NAME}
    GD_VERSION android 2.208
    SOURCES src/main.cpp
)
