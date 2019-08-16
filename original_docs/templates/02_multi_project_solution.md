# Multi-Project Solution ?

A solution is a collection of one or more than one project(s).  It could be collection of various independent source code components that together create a targets (libraries or executables).  It could also contain test projects testing the targets.  On Windows, if one is using MSVC IDE, they can map filename ending in `.sln` as the `solutions` file.


## What this demo is all about then ?

Within this example, the intent is to demonstrate on how to organize the source code and create multiple targets, specifically, focus would be to create multiple executables within the same solution.


## Source Code Organization

Let's focus on out-of-source build.  Start thinking about two (independent) projects, for instance, name them `first_project` and `second_project`.  Let these two project create two different targets (executables).

### How do we perform this build activity just with the help of *one* CMake listfile ?

Well, it is possible to achieve this objective, but let me illustrate one of the ways with one top-level listfile and multiple subdirectory listfiles.  Consider this folder organization.

~~~
02_multi_project_solution
|
|------ first_project
|       |----- main.cpp
|       |----- CMakeLists.txt
|
|------ second_project
|       |----- main.cpp
|       |----- CMakeLists.txt
|
|------ CMakeLists.txt
~~~

As one could see, there is a top-level CMakeLists.txt file along with two other listfiles, within the two different source directories, namely, `first_project/CMakeLists.txt` and `second_project/CMakeLists.txt`


## What is the difference between these listfiles present at different hierarchies ?

While the top-level CMakeLists.txt file has to deal with specifying the solution level properties, locating the child CMakeLists.txt files, the sub-project CMakeLists.txt contains instructions those are similar to that we've already seen with template `01_basic_example_hello_world`.  Here too, the responsibility of the project specific CMakeLists.txt is to build their respective targets (executables).


## How does top-level (solution-level) listfile find the child-level (project-level) listfiles ?

When CMake tool is executed on the parent listfile, the top-level CMakeLists.txt behaves like the parent for all the sources and listfiles within the `first_project` and `second_project`.

CMake language construct provides the user with the command `add_subdirectory` to find other listfiles located within the sub-directories

~~~
add_subdirectory(first_directory)
add_subdirectory(second_directory)
~~~

This is all what is needed to be done at the parent-level listfile.

The creation of the targets is the individual responsibility of the listfiles present within the sub-directories.

Visit the demo example '02_multi_project_solution` for the complete sources.