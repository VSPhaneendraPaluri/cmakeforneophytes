---
layout: page
title: Start-Here
---

## What is 'CMake' ?
After performing some googling, one would end up knowing that CMake is a *build system generator*.  The intent of this blog is not to teach the **Need for CMake**, but rather, share knowledge on how to get started *using CMake*.

To find out the Introduction and why CMake is standing out as the widely-used build-system generator, refer to this 
[introductory slides on CMake]({{site.url}}/slide-deck/learn-cmake.pptx).  This slide-deck should help prepare lay the foundation for the battle that lies ahead.


## What's in this Blog ?
First of all, let me **emphasize** that within this blog, I'd be discussing primarily about building C++ projects and solutions using CMake.  So, readers interested in digging deeper into *applying CMake to other languages*, kindly refer to other relevant blog(s).

But, I'd try put forth the concepts in a generic way as far as possible.


## What must one do first ?
Go ahead and try cloning the repository:

```
$ git clone https://github.com/VSPhaneendraPaluri/cmakeforneophytes.git
```

The above slide-deck is also part of the documentation section within this repository


## Repository Content Overview

The content within the repository is organized as shown below

Root Directory (learn-cmake)  |  Content Type
------------- | -------------
cmake_for_cpp | Demo examples illustrating various features of CMake
slide-deck    | CMake related Documentation, notes, etcetera


### List of Demo Examples

Demo Templates  |  Summary
----------------------------------- | ------------------------------
00_system_information               | Illustrates how to query and retrieve system information
01_basic_example_hello_world        | Illustrates a basic **hello-world** program
02_multi_project_solution           | Demo on creating a solution containing multiple independent projects
03_include_external_headers         | Creating solution by including external header files (or headers only library)
04_testing_using_ctest              | Testing a project using CTest features
05_bulid_and_link_to_static_library | Illustrates organizing of the source code & view, and testing an executable that links to a STATIC library
06_build_and_load_shared_dlls       | Illustrates organizing of the source code & view, and testing an executable that links to a SHARED library (DLL)
07_run_defines_specific_code        | Illustrates executing preprocessors defined source code ONLY
08_using_NuGet                      | Illustrates executing source code that links against headers and libraries downloaded via NuGet package manager and accessed via custom written CMake MODULEs

Helpers for Demo Templates  |  Content Type
----------------------------------- | ------------------------------
cmake_modules                       | Contains CMAKE MODULEs that shall be used in few of the later templates

External Package Installation Area|  Content Type
----------------------------------- | ------------------------------
folder containing NuGet packages    | Some demo templates shall be using NuGet packages


## Let's Dive into the Demo Codes !

Now, navigate to [Demo-Examples]({{site.baseurl}}{% post_url 2019-08-20-demo-examples %}) to go to the demo page.