# CMake Support for Handling Pre-processors Derivatives

Sometimes, as developers, we have situations where in we have to develop source code such that certain sections of it are controllable by use of *pre-processor macros*.

Obviously these are compile time features that are supported by compilers and hence, having CMake address such issues too is quiet brilliant.


## What's the New CMake Command ?

One must make use of `target_compile_definitions` command while trying to pass on the compile-time directive flags to CMakeLists.txt file.  Note this command is different from the `target_compile_options` that we had encountered earlier.

This command has very similar syntax to other 'target_xxxxx_xxxxx' commands.

~~~
target_compile_defintions(
  ${PROJECT_NAME}
  PRIVATE
  ${<list_of_macro>}
)
~~~

As one could notice, this command too follows a similar syntax to other target_* commands.

The use of keyword PRIVATE here in this command is to limit the macro visibility to the current project and build only.

**NOTE:**  Good to mention that the order of writing these command matters.  This command should be mentioned only after the rule for the target of the current project is mentioned.

Rest all is very similar.