cmake_minimum_required(VERSION 3.0)

project(
  MultiProjectSolution
  LANGUAGES CXX
)

add_subdirectory(first_project)
add_subdirectory(second_project)
