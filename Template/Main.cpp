/**************************************************
 * FileName: Main.cpp
 * Usage: $make
 * Description: Use "make" command to run this program.
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
#include <iostream>

#include "./code.h"

/*** User Defined Parameters ***/
// PARAMETER_1 = 1

/*** Folder/Path/Parameters Setting ***/
// FOLDER_1 = "./"
// PATH_1 = "./"
// GLONAL_CONSTANT_NAME = 1

/*** Main ***/
int main() {
  /***
   * Process Info: ...
   ***/
  std::cout << "Hello World!" << std::endl;

  ClassName CN;
  std::cout << CN.var << std::endl;
  CN.func();

  return 0;
}