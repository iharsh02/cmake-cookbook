# CMAKE - submodules

### Here we are learning about github submodules and how we can use them with cmake in our project.

Submodules is a way to include Git Repository inside another Git repository , while keeping them as seprate repos.

Here we are using glfw library as a submodule in our repo

To add subdirectory to our cmake we got to follow the following instruction

`add_subdirectory(path to the dir)`

after add the subdirectory we have to link them so we can use them 

`target_link_libraries([name][PRIVATE|PUBLIC] [lib name])`


here we created a seprate folder external to keep our library that we are using in our code base


As we can see in our top level cmake file we have included and link the library directory cause `target_link_libraries` does more than linking a library 

GLFW/glad have its own cmake file which have `target_include_directories` which tells where to look for header files 