cmake_minimum_required (VERSION 3.0)

project (
  HelloWorld
  LANGUAGES CXX
)

set (SOURCES hello_world.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
