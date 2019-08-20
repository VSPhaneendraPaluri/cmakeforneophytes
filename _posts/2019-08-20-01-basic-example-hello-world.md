---
layout: post
title: Running Basic Hello World Program
date: 2019-08-20 19:50 +0530
category: demo-example-template
---

# What's In This Example ?

This demo illustrates how to build a executable target out of a simple (single) source file.


## What does one require ?

A simple source (say, hello_world.cpp) that contains just the main function and prints *something*

```C++
int main (int argc, char * argv[])
{
    std::cout << "\nHello World !!!" << std::endl;
    return 0;
}
```

## How to build an executable out of this source ?

Well, there could lots of variables that one could setup in-order to achieve this objective.
One of the ways to accomplish that is presented below

As mentioned in the earlier template, start with mentioning the minimum required CMake tool version.

Next immediate need would be to specify the various attributes for the project.
These would be, name of the project, project versioning, language(s) supported by the project, etc. 
Below is an illustration.

~~~
project (
  HelloWorld
  LANGUAGES CXX
)
~~~

For this demo example, the project name has been specified as **HelloWorld**.  Notice the use of *project* CMake language construct.
The sources listed within this project are Cpp sources.

**NOTE:** User could use **PROJECT_NAME** variable to query the *name of the project* in the later part of the listfile.

Moving on.. Now, let's start listing the source files.
User could make multiple ways to list the source files.  One of them is to accumulate all the sources under a single variable by making use of **set** CMake command.

~~~
set(
  SOURCES
  hello_world.cpp
)
~~~

The final thing that the user is required to mention is the target.
For a given CMake project, a target could either be a *library* or an *executable*.

Here, the objective of this example is to create an executable out of a simple CPP source file.  Hence, the target becomes the **executable**.

So, the final pending instruction is creating the executable.

~~~
add_executable(
  ${PROJECT_NAME}
  ${SOURCES}
}
~~~

Kindly pay attention that here, the target (executable) name is the same as the project solution name.

There is *python script* provided which could be used for cleaning, configuring, building, and running the built executable.

The command-line arguments for the above Python script are **clean**, **configure**, **build** and **run**, respectively.

After running the executable, one should be able to view the below string printed on the standard output console.
~~~
Hello World !!!
~~~

Congratulations !  :)

You have just finished executing your first CPP program using *CMake*.