cmake_minimum_required(VERSION 3.16)
project(cppzero VERSION 0.1.0 LANGUAGES C CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set C standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Include custom cmake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

# Include dependencies
include(cmake/dependencies.cmake)

# Include compiler options
include(cmake/compiler-options.cmake)

# Library target
add_library(cppzero SHARED
  src/application.cpp
  src/document.cpp
  src/arena.cpp
  src/calculation_engine.cpp
  src/calculation_engine.c
)

target_include_directories(cppzero
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(cppzero
  PUBLIC
    nlohmann_json::nlohmann_json
)

# CLI Application
add_executable(cppzero_cli src/main.cpp)
target_link_libraries(cppzero_cli PRIVATE cppzero CLI11::CLI11)

# Testing
enable_testing()
add_subdirectory(tests)

# Examples
add_subdirectory(src/examples)
