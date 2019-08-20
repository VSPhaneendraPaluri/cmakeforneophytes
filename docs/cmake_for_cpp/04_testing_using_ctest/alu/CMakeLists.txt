cmake_minimum_required(VERSION 3.0)

project(
  Alu
  LANGUAGES CXX
)

set(
  HEADERS
  include/alu.h  
)

set(
  SOURCES
  src/alu.cpp
  )

add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PUBLIC include)
