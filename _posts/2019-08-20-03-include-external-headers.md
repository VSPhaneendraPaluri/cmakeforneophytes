---
layout: post
title: Including External Headers
date: 2019-08-20 19:51 +0530
category: demo-example-template
---

# Creating Targets that Use Headers ONLY External Sources

Within this demo example, we shall see how to incorporate *headers only* sources or libraries into our solution.


## Creating a Dummy headers only utility file

Let us create *Singleton* class for demonstration purposes, place this under a directory other than the solution
directory (as shown below).

~~~
03_include_external_headers
|
|----- CMakeLists.txt
|
common_utilities
|
|------ headers_only
        |
        |----- singleton
               |----- singleton.h
~~~


## How to include external sources (here, HEADERS ONLY) into the solution listfile ?

CMake support instruction(s) that allows inclusion of directories that list the sources needed for a target to be
built.  These instructions are:
* `include_directories`, and
* `target_include_directories`

Both of these instructions allow the current CMakeLists.txt (in this case, `03_include_external_headers/CMakeLists.txt`)
to point to the directory and their sub-directories of interest.

Let's take out a moment to appreciate the subtle differences between the two commands.

If the solution-level listfile (here, `03_include_external_headers/CMakeLists.txt`) 'include_directories`
uses this command, then the external sources become available to every other target too.

Alternatively, if one uses 'target_include_directories` command, it limits the accessibility of the external
sources only to the defined target of interest.

Here, within the demo example, the latter CMake command has been used in the following way.

~~~
target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
  "${CMAKE_CURRENT_SOURCE_DIR}/../common_utilities/headers_only/singleton"
}
~~~

Here, one thing to notice would be the use of 'PRIVATE' keyword.

The choices that are available to the user are, PUBLIC, PRIVATE and INTERFACE.

**INTERFACE** :  It means that the sources listed under the *include_directories* or *target_include_directories*
command shall NOT be consumed by the target being referred, but available for the other sources using this target
This is not the case here, as we trying to IMPORT rather than EXPORT something.

**PRIVATE** :  It means that the sources shall be consumed by the specified target for it's own build activity.

**PUBLIC** :  Symbolically, `PUBLIC := PRIVATE + INTERFACE`


## One Important Thing :  Order of Use of xxxxinclude_directories command

It is always important to mention the target before one uses the command *include_directories* or *target_include_directories*.  Only once the target has been defined, one **MUST** specify or use these include commands.

Only then the project or solution sources would be able to find these external include headers (sources), rather.