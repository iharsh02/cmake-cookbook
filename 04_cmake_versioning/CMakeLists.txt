cmake_minimum_required(VERSION 4.3.1)
project(HelloCmake VERSION 1.3.0)

configure_file(HelloConfig.h.in HelloConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})