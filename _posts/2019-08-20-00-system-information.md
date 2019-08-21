---
layout: post
title: Displaying System Information
date: 2019-08-20 19:49 +0530
category: demo-example-template
---

# Example Illustrating Capturing System Information Using CMake

This demo example lists no source C++ source code.  This demo example just lists a single CMakeLists.txt file.  As you might have noticed within the 'Introductory Slides for CMake', for generating the scripts, the first CMake stuff that is required is this *listfile*, namely, *CMakeLists.txt*.

Let's create a *listfile* within the project directory.


## Specify recommended version of CMake tool for your build activity

The recommended CMake instruction that must go into any CMakeLists.txt at the beginning is shown below.
```
cmake_minimum_required(VERSION <version_number> <optional_error_handling>)
```
It is intuitive to understand the arguments that are needed to provided in order to let the build system confirm to a specific version of CMake and above.


## What if CMake listfile required version is not met ?

Let's verify CMake version on my current system which I've this infra-structure in place.

~~~
C:\>cmake --version
cmake version 3.14.0

CMake suite maintained and supported by Kitware (kitware.com/cmake).
~~~


Let's try to modify the minimum version of CMake required from 3.14.0 to (hypothetical) 4.0.0 (not available or not yet installed) and observe the behavior on the above command execution.
```cmake
cmake_minimum_required (VERSION 4.0 FATAL_ERROR)
```
**NOTE:** *FATAL_ERROR* option is ignored by CMake version 2.6 and higher.


Now, observe what happens when the CMake version is not met and how cmake reports this.

~~~
PS xxxxxxxxxxx\learn-cmake\cmake_for_cpp\00_system_information> cmake .
-- Building for: Visual Studio 15 2017
CMake Error at CMakeLists.txt:1 (cmake_minimum_required):
  CMake 4.0 or higher is required.  You are running version 3.14.0


-- Configuring incomplete, errors occurred!
~~~


## Query System Information
CMake has support for lots of in-built variables that provide the system information to the user.

Few of them have been demonstrated as a part of this [demo]({{site.baseurl}}/cmake_for_cpp/00_system_information/CMakeLists.txt).


## CMake Support of Variables describing System and providing Information
* [Describing System](https://cmake.org/cmake/help/latest/manual/cmake-variables.7.html#id4)
* [Providing Information](https://cmake.org/cmake/help/latest/manual/cmake-variables.7.html#variables-that-provide-information)


**NOTE:**
  For running this sample, no in-source/out-of-source build(s) are required since we are not building project/solution from any source.  This is an empty solution.