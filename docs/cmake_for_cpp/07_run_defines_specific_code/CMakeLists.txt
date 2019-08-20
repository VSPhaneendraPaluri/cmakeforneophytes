cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(DefiningPreprocessors LANGUAGES CXX)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_definitions(${PROJECT_NAME} PUBLIC INSERT_ODD_NUMBERS)

# Try swapping this MACRO
#target_compile_definitions(${PROJECT_NAME} PUBLIC INSERT_EVEN_NUMBERS)
