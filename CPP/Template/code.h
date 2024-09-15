/**************************************************
 * FileName: code.h
 * Usage: Declare Classes & Functions
 * Description: ...
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
#ifndef _CODE_H
#define _CODE_H
#include <iostream>

#include "./code.cpp"

/*** Function Declaration ***/

/*** Class Definition ***/
class ClassName {
  /***
   * Class Info:
   ***/
public:
  int var = 100;
  int func_out = function_name(10);
  void func() { std::cout << func_out << std::endl; }

private:
};

#endif