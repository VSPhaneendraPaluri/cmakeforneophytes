cmake_minimum_required(VERSION 3.0)

project(
  MySingleton
  LANGUAGES CXX
)

#include_directories(${PROJECT_SOURCE_DIR}/../common_utilities/headers_only/singleton)

set(SOURCES
  include/MySingleton.h
  src/MySingleton.cpp
  src/Application.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../common_utilities/headers_only/singleton")
