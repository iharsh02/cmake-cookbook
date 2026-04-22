#include <HelloConfig.h>
#include <iostream>
int main() {
  std::cout << "Hello! Cmake" << std::endl;
  std::cout << "This is version 2 of this code base let see our source code" << std::endl;
  std::cout << "VERSION:" << Hello_VERSION_MAJOR << "." << Hello_VERSION_MINOR
            << "." << Hello_VERSION_PATCH << std::endl;
}