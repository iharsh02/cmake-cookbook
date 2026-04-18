## CMake - Libraries

Libraries are pre-make Toolkits, Insted of writing every single function from scratch , we can use someone else library that is already wrote and tested. 

Building our own library is like building that toolkits, that can be reused and can be used in many different projects 

**Static lib** : (`.lib` on windows / `.a` on linux)  These are baked in libraries , pre-compiled code that id copied direclty into an application executable during the compilation.

**Dynamic lib**: (`.dll` on windows/ `.so` on linux) These are also known as shared libraries remain a sperate file and loaded into memory when program runs.

` To understand libraries and how to use it in cmake we building a adder library then using it in other program `


## Building library

Building library is as simple as building executable in cmake 

To create Executable we have to use following instruction 
`add_executable([name][path])`

Same goes for building library we use following instruction 
`add_library([name][path])`

In `build_lib` folder we are buidling a static library and build it using cmake


## Using library

To use the external code , we need to get header file and the .lib file(build binary) 

After getting the lib files in  seprate folder, we got to tell cmake where the files are and what type of file

To include the library/external folder in cmake we got to use the following instruction

`target_include_directories(myadder PRIVATE external)`
This tell cmak to where to find the header file .h file


`target_link_directories(myadder PRIVATE external)`
 This add the 'external' folder to the search list

`target_link_libraries(myadder PRIVATE mymath)`

 Now the linker knows to look in 'external' for 'mymath.lib'

