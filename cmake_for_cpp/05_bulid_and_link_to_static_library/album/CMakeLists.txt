cmake_minimum_required(VERSION 3.0)

project(
  Album
  LANGUAGES CXX
)

set(
  HEADERS
  test_framework/PlaylistFactory.h
)

set(
  SOURCES
  test_framework/PlaylistFactory.cpp
  album.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PRIVATE test_framework/)
target_link_libraries(${PROJECT_NAME} Songs)