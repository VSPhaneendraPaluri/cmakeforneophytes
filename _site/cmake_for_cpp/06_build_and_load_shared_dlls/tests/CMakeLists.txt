cmake_minimum_required(VERSION 3.0)

project(
  TestDll
  LANGUAGES CXX
)

set(
  SOURCES
  TestDll.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_ROOT}/sources/")

target_link_libraries(${PROJECT_NAME} HelperAlgorithms)

add_custom_command(
  TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy
  ${CMAKE_SOURCE_DIR}/build/sources/Debug/HelperAlgorithms.dll
  ${CMAKE_SOURCE_DIR}/build/tests/Debug/
)
