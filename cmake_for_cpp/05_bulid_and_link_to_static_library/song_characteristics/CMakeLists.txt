cmake_minimum_required(VERSION 3.0)

project(
  SongCharacteristics
  LANGUAGES CXX
)

set(
  HEADERS
  include/SongAttributes.h
  include/SongCharacteristics.h
)

set(
  SOURCES
  src/SongCharacteristics.cpp
)

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})
target_include_directories(${PROJECT_NAME} PUBLIC include)
