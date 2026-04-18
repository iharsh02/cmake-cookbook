cmake_minimum_required(VERSION 4.3.1)
project(myadder)
add_executable(myadder main.cpp)

target_include_directories(myadder PRIVATE external)
target_link_directories(myadder PRIVATE external)
target_link_libraries(myadder PRIVATE mymath)


