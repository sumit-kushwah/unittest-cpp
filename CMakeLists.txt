cmake_minimum_required(VERSION 3.12) # version can be different

project(my_cpp_project) #name of your project

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

set(SOURCE_FILES
    sample.cc
    test.cc
)

add_executable(mytests ${SOURCE_FILES}) # add this executable

target_link_libraries(mytests PRIVATE gtest gtest_main) #link google test to this executable