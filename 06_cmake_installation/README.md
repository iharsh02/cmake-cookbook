# Installing Software - CMake

How we can make a setup.exe or installer file using cmake , so anyone can install our software

To make other to install our software in there machine they need a installer file

To build this installer file using cmake we need to use cpack 

```bash

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set(CPACK_PACKAGE_VERSION_MINOR "${Hello_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${Hello_VERSION_MINOR}")
include(CPack)

```

This command will create the setup file
```bash
cpack (in build folder)
```

It takes License.txt file , major and minor version of your project.
