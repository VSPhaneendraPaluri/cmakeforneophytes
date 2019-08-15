# Welcome Back, Let's build Dynamic Link Library (DLL)

As one might understand, the concept of STATIC libraries and SHARED DLLs is completely different.  Just to mention, explaining the differences between the two libraries is NOT within the scope of this page.

The object is to get to build DLL target and use (load) them later in an application (an executable).


## Some Information related to DLL Library Sources from the Current Demo

~~~

#ifdef HELPER_ALGO_EXPORTS
#define HELPER_ALGO_EXPORT_DLL __declspec(dllexport)
#else
#define HELPER_ALGO_EXPORT_DLL __declspec(dllimport)
#endif

class HELPER_ALGO_EXPORT_DLL HelperAlgorithms
{
  public:
  
    // Set of Interface APIs that are exported
};
~~~


## Rules for Creating DLL and Exporting an Interface

As we could see from the above code snippet, *HELPER_ALGO_EXPORTS* control when interface is exported and when it can be imported.

To create the DLL of HelperAlgorithms, user needs to define `HELPER_ALGO_EXPORTS`.  It would enable `__declspec(dllexport)` which specifies the compiler to export the interface.

The following listfile instruction demonstrate how it is done.

~~~
add_library(
  ${PROJECT_NAME}
  SHARED
  ${<list_of_sources>}
)

target_compile_options(
  ${PROJECT_NAME}
  PRIVATE
  -D HELPER_ALGO_EXPORTS
)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC
  ${<list_of_exported_headers>}
)
~~~

`SHARED` keyword sets the earlier discussed CMake in-built variable *BUILD_SHARED_LIBS* is set to *true* or *ON*

Also, one could easily notice that the CMake command `target_compile_options` supports the language constructs such as PUBLIC, SHARED and INTERFACE type.  The basic definition for the usage of these language constructs is the same.

Within the current example, the compile time option parameter has been set to PRIVATE since this pre-processor directive is required only by the current target (DLL).


## Rules for Linking against DLL and Importing Interface(s)

Rules for linking DLL to the application are no different to what we have witnessed with the earlier example.

Here, the application that requires to use these interfaces, needs to load this DLL first.  Also, the application MUST NOT TO DEFINE the *HELPER_ALGO_EXPORTS* since, it is the one that wants to import these services provided by the DLL.  Compiling the target (application) sources WITHOUT defining the *preprocessor* enables `__declspec(dllimport)` which indicates to the compiler that the requested interfaces are available within the loaded DLL.

The only other new CMake command that user would notice in the application listfile is `add_custom_command`.

Syntax is as shown below

~~~
add_custom_command(
  TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy
  ${CMAKE_SOURCE_DIR}/build/sources/Debug/HelperAlgorithms.dll
  ${CMAKE_SOURCE_DIR}/build/tests/Debug/
)
~~~

Note that since this is a *custom CMake command* that needs to run POST BUILD, hence, it needs to be mentioned only after setting up the target.  In this case, this custom command is used to copy the DLL built at it's default location and copy it to the location where the final executable is expected to be located.  So, that when application is executed, the application target finds the DLL alongside it.

That's it !!

We haven't learnt the most efficient of dealing with DLLs on Windows yet, but the actual scope of this demonstration was to showcase the action of SHARED in DLL creation.

-----------------------------------------------------------------------

### I'd definitely be interested in writing an another small template that highlights few new features that have been introduced in CMake 3.4 which have enabled the efficiency of DLL creation on Windows at-least.