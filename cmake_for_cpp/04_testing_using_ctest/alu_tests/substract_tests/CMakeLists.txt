cmake_minimum_required(VERSION 3.0)

project(
  SubstractTests
  LANGUAGES CXX
)

add_executable(${PROJECT_NAME} test_substract_operations.cpp)
target_link_libraries(${PROJECT_NAME} ${Library})

add_test(substractTest ${PROJECT_NAME})
