# Making libs optional - CMake 

Here we are learning how we can make libs optional in CMake

# Create an Option in CMake

```bash
option(USE_ADDER "A Simple library for adding two numbers" ON)
```
The option instruction have :

*USE_ADDER* is a varable name which we can call using `-D` parameter while makeing our cmake file
`CMake -DUSE_ADDER=OFF -S . -B out/build`

*[Defination or Comment ]* : This will take the Option about , basically what this option does

*[on \ off ]* is the default parameter , execute this instruction by default 


* Using this instruction below make it possible to add the adder libery to our codebase:

```bash
if(USE_ADDER)
    target_include_directories(OptionalLibs PRIVATE external)
    target_link_directories(OptionalLibs PRIVATE external)
    target_link_libraries(OptionalLibs PRIVATE mymath)
    message("Adder library is used")
else()
    message("Library not used")
endif()
```