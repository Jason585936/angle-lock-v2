cmake_minimum_required(VERSION 3.24)

# Create the project
project(AngleLock VERSION 1.0.0 LANGUAGES CXX)

# Tell CMake to use the Geode SDK installed by the GitHub Action environment
set(CMAKE_CONFIG_FILE "${CMAKE_CURRENT_BINARY_DIR}/GeodeConfig.cmake")

# Find and load the Geode SDK framework
find_package(Geode REQUIRED)

# Setup our mod files
add_geode_mod(
    ${PROJECT_NAME}
    GD_VERSION android 2.208
    SOURCES src/main.cpp
)
