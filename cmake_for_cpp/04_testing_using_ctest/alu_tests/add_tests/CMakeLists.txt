cmake_minimum_required(VERSION 3.0)

project(
  AddTests
  LANGUAGES CXX
)

add_executable(${PROJECT_NAME} test_add_operations.cpp)
target_link_libraries(${PROJECT_NAME} ${Library})

add_test(addTest ${PROJECT_NAME})
