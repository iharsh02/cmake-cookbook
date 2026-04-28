## CMake 

Its a build system generator , Where cmake generate build files while make execute them 

CMake(generated build file) -> MAKE (Build automation tool)

1. On Windows, CMake translates it into a Visual Studio Project.
2. On Linux, CMake translates it into a Makefile.
3. On Mac, CMake translates it into an Xcode Project.


## Setup CMake 

* To use cmake in our project we need to have a `CMakeLists.txt` file in our root directory , Its a instruction manual to the project , keeps all the instructions regarding the project

* To setup cmake in our project we need to initilize in our project using the command below :

Source should be the root of the project where `CMakeLists.txt` file on
    `cmake -S [path to source] -B [path to build]`

`NOTE: Every time we make change to our code we need to run this command to make the latest build file.`

* To build the project we need to run command :
    `cmake --build [path to build dir]`
This command will build the project in our case , it will build the .exe

## CMake Instructions 

`cmake_minimum_required(VERSION 4.3.1)` - Tell the minimum cmake version required to build this project

`project(NAME)` - Tell about the project name

`add_executable([name][source])` - Build the executable 