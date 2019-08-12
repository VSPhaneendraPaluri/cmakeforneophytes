cmake_minimum_required(VERSION 3.0)

project(
  DivisionTests
  LANGUAGES CXX
)

add_executable(${PROJECT_NAME} test_division_operations.cpp)
target_link_libraries(${PROJECT_NAME} ${Library})

add_test(divisionTest ${PROJECT_NAME})