cmake_minimum_required(VERSION 4.0 FATAL_ERROR)

project(
  SystemInformation
  LANGUAGES C CXX
)

message(STATUS "......................................................................")
message(STATUS ".................. Querying System Information .......................")
message(STATUS "......................................................................")

message(STATUS "CMake Required Version           : ${CMAKE_MINIMUM_REQUIRED_VERSION}")
message(STATUS "CMake Version                    : ${CMAKE_VERSION}")
message(STATUS "Operating System Name            : ${CMAKE_SYSTEM_NAME}")
message(STATUS "Host Operating System Name       : ${CMAKE_HOST_SYSTEM_NAME}")
message(STATUS "Host System Processor            : ${CMAKE_HOST_SYSTEM_PROCESSOR}")
message(STATUS "C Compiler ID                    : ${CMAKE_C_COMPILER_ID}")
message(STATUS "C Compiler VERSION               : ${CMAKE_C_COMPILER_VERSION}")
message(STATUS "CXX Compiler ID                  : ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "CXX Compiler VERSION             : ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "Bit Operating System             : ${CMAKE_SIZEOF_VOID_P}")
