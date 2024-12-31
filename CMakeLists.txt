# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define global variables for the project and executable names
set(PROJECT_NAME HashTable)
set(EXE_NAME HashTable)

# Set the project name and version
project(${PROJECT_NAME} VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(CMAKE_PREFIX_PATH "C:\\tools\\vcpkg\\installed\\x64-windows\\share")


# Define paths for source files and headers
# set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/source)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

# Include directories
include_directories(${INCLUDE_DIR})

# Collect source files
file(GLOB SOURCES "${SOURCE_DIR}/*.cpp")

# Add the executable
add_executable(${EXE_NAME} main.cpp)

# Add include directories
target_include_directories(${EXE_NAME} PRIVATE ${INCLUDE_DIR})

# Or use the header-only version
find_package(fmt CONFIG REQUIRED)
target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt-header-only)
