---
layout: post
title: Test Using CTEST Feature
date: 2019-08-20 19:51 +0530
category: demo-example-template
---

# Testing Using CTEST

This tutorial is focussed on giving a basic introductory usage of `ctest` program, one of the tool features of CMake.

Though this tutorial objective is to illustrate the use of `ctest` features of CMake tool, but it is worth mentioning the following few points beforehand.

1. This template also contains instructions related to creation of a target - STATIC library from sources
2. It also lists another target - EXECUTABLE that links against the earlier created STATIC library
3. Finally, the tests are written for testing the EXECUTABLE that explore features of CTEST program

Points #1 and #2, shall be dealt separately in another template, for the time being, one can ignore them.  One can treat it as there is no separate library that is built.  One can imagine as if the executable is built by a single project that has all the sources present within it.  


## Get started ...

CMake, again provides us with commands to enable testing features provided by *ctest* program.

There are two ways to doing this.

1. Either call `include(ctest)` in the root directory of the tests, or
2. Call `enable_testing()` command before a call to the test directory is made that lists all the tests.

Here, I've tried to demonstrate this by use of `enable_testing()` command.

Note the order of the instructions presented below

~~~
add_subdirectory(alu)

enable_testing()
add_subdirectory(alu_tests)
~~~

and

~~~
enable_testing()

add_subdirectory(alu)
add_subdirectory(alu_tests)
~~~

In both the variants, note that the order in which the instructions are called.
In either case, `enable_testing()` is called before adding the directory that lists the tests (`alu_tests`)

Both the variants are correct and they allow the detection of tests while the program is executed or run.
Both the commands internally sets the in-built variable `BUILD_TESTING` feature to `ON`


## We are NOT done yet

The above command only does allow only the detection of the tests.  CMake, supports another command `add_test` that must be used by the user in order to execute and output the tests run (success/failure) report.

Hence, where the final executable is built, the user has to make sure that the command `add_test` is used along the final target.  Again, note the order of calling `add_test` command (after the target is built).

~~~
add_executable(
  ${PROJECT_NAME}
  <sources>
)

add_test(<testName> ${PROJECT_NAME})
~~~

That's it - This is as simple as it can get !

`add_test` supports few other options as well and all options have not been exercized here.

Have fun !!