cmake_minimum_required(VERSION 3.0)

project(
  MultiplyTests
  LANGUAGES CXX
)

add_executable(${PROJECT_NAME} test_multiply_operations.cpp)
target_link_libraries(${PROJECT_NAME} ${Library})

add_test(multiplyTest ${PROJECT_NAME})