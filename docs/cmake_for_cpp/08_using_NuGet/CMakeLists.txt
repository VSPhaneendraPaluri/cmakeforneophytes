cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

project(UsingNuGet)

set(PVS_NUGET_PACKAGES ${PROJECT_SOURCE_DIR}/../pvs_nuget_packages)

set(CMAKE_MODULES_DIRECTORY ${PROJECT_SOURCE_DIR}/../cmake_modules/)

list(
  APPEND
  CMAKE_MODULE_PATH ${CMAKE_MODULES_DIRECTORY}
)
message(STATUS "CMake Modules are ${CMAKE_MODULE_PATH}")

# Creates the directory 'pvs_nuget_packages'
file(MAKE_DIRECTORY ${PVS_NUGET_PACKAGES})

find_program(NUGET nuget)
if(NOT NUGET)
  message(FATAL_ERROR "NuGet CLI tool is not installed.  Kindly install it to proceed further.")
endif()

find_package(PvsSoftToolsSystemC)
if(NOT PVS_SOFTTOOLS_SYSTEMC_FOUND)
  message(FATAL_ERROR "Cmake module for PvsSoftTools.SystemC.v1.0.0 not found.  Check for CMAKE_MODULE_PATH list")
endif()

add_executable(${PROJECT_NAME} main.cpp)

if(NUGET)
  message(STATUS "NuGet CLI tool installed.  Proceeding further.")
  message(STATUS "Installing NuGet Packages under ${PVS_NUGET_PACKAGES} directory")
  # Copies the 'packages.config' file to the directory listing the solution
  configure_file(
    packages.config
    ${CMAKE_SOURCE_DIR}/build/packages.config COPYONLY
  )
  # Adds a custom target 'nuget-restore'
  add_custom_target(
    nuget-restore
    COMMAND NUGET restore ${PROJECT_SOURCE_DIR}/build/${PROJECT_NAME}.sln
    -PackagesDirectory ${PVS_NUGET_PACKAGES}
  )
endif()

add_dependencies(${PROJECT_NAME} nuget-restore)

# Include and link against SystemC library
target_include_directories(${PROJECT_NAME} PRIVATE ${PVS_SOFTTOOLS_SYSTEMC_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${PVS_SOFTTOOLS_SYSTEMC_LIBRARY_DIR}/SystemC.lib)

