cmake_minimum_required(VERSION 4.3.1)
project(HelloCmake VERSION 1.0)

configure_file(HelloConfig.h.in HelloConfig.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MINOR "${Hello_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Hello_VERSION_MINOR}")
include(CPack)