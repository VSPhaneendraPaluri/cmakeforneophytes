cmake_minimum_required (VERSION 3.0)

project(SimpleAluModel)

set(TestingUsingCTest)

enable_testing() ## Either the above command or this command should make it work !

add_subdirectory(alu)
add_subdirectory(alu_tests)

