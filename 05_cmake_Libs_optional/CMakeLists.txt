cmake_minimum_required(VERSION 4.3.1)
project(OptionalLibs)
add_executable(OptionalLibs main.cpp)

option(USE_ADDER "A Simple library for adding two numbers" ON)

if(USE_ADDER)
    target_include_directories(OptionalLibs PRIVATE external)
    target_link_directories(OptionalLibs PRIVATE external)
    target_link_libraries(OptionalLibs PRIVATE mymath)
    message("Adder library is used")
else()
    message("Library not used")
endif()