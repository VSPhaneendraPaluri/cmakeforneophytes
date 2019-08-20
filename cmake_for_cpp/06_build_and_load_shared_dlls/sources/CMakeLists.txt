cmake_minimum_required(VERSION 3.0)

project(
  HelperAlgorithms
  LANGUAGES CXX
)

set(BUILD_SHARED_LIBS ON)

set(
  SOURCES
  HelperAlgorithms.h
  HelperAlgorithms.cpp
)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

target_compile_options(
  ${PROJECT_NAME}
  PRIVATE
  -D HELPER_ALGO_EXPORTS
)

target_include_directories(${PROJECT_NAME} PUBLIC sources/)
