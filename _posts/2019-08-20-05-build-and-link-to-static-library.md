---
layout: post
title: Building Static Library & It's Use
date: 2019-08-20 19:52 +0530
category: demo-example-template
---

# Template Illustrating Creating a STATIC Library and It's Usage

Let's revisit the earlier topic on how to build to a STATIC library and have another target (an executable) that requires linking to this static library in order to use the features provided by the library.


## What's in the example ?

This example is a small illustration that show-cases on how one can create static library(ies) and link them all together.  Finally, create an executable that uses them.

~~~
song_characteristics  (TargetType :  STATIC Library)
|..... CMakeLists.txt
|
songs  (TargetType : STATIC Library)
|..... CMakeLists.txt
|
albums  (TargetType : Executable)
|..... CMakeLists.txt
~~~

As shown above, the projects `song_characteristics` and `songs` are the two targets that are being built as *libraries*.  `album` is the project that is consuming these two libraries and creating an executable.


## Points Worth Mentioning

1. `song_characteristics` project creates the library by name *SongCharacteristics* and also exposes the include files later to be consumed by the `song` project.  It is achieved with the two instructions mentioned below:

~~~
add_library(
  ${PROJECT_NAME}
  STATIC
  ${<list_of_sources>}
)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC
  ${<list_of_include_headers>}
}
~~~

As one can notice above, *add_library* creates a target (here, it's the library) and the type of library that is built is **STATIC**.

All the available options for library types are

1. STATIC : archives of different object-files
2. SHARED : dynamic library that is loaded at run-time
3. MODULE : plugins loaded dynamically using dlopen like functionality

**NOTE:**  STATIC library type sets the internal in-built CMake variable `BUILD_SHARED_TYPE` to *false* or *OFF*

Also, one could notice that by mentioning PUBLIC for *target_include_directories* command, the current target is trying to use the include headers files both for it's build as well as later allowing other targets to consume these include headers.


## Listfile for Creating `song` Target is Exactly Similar to `song_characteristics` Target Creation

*Almost similar, but for introduction of one more new CMake command - 'target_link_libraries'*.  Again, there is another command `link_libraries`, but let's maintain it target specific.

Yes, you read it right !!

This new command *target_link_libraries* is required to allow linking against the previously created 'song_characteristics' target (library).

Important CMake rules could be seen below

~~~
add_library(
  ${PROJECT_NAME}
  STATIC
  ${<list_of_sources>}
)

target_link_libraries(
  ${PROJECT_NAME}
  SongCharacteristics
  ${<any_other_set_of_libraries_that_are_needed>}
)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC
  ${<list_of_current_include_headers_to_be_consumed_by_other_targets>}
}
~~~

I hope that the difference in rules listed over here is pretty intuitive.

Kindly note that the order of inclusion of these two commands, namely, *target_include_directories* and *target_link_libraries* should be placed after defining the current target library using *add_library*


## Finally!! Create the Executable Target

The final step would be to create a CMakeLists.txt that uses the include headers and libraries from the `Song` target project, and creates an *executable*.

It is sufficient to list the include headers as PRIVATE since, it is only the current executable target that is going to consume the include headers of 'album' project.

For further details on creating libraries types, refer to this [link](https://cmake.org/cmake/help/v3.0/command/add_library.html)