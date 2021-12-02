/**************************************************
 * FileName: Log.cpp
 * Usage: $ make
 * Description: ...
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
// #include <>
#include <iostream>
#include "Log.h"



/*** User Defined Parameters ***/



/*** Folder/Path/Parameters Setting ***/



/*** Function ***/
void Log(const char *message)
{
    std::cout << message << std::endl;
}

void InitLog()
{
    Log("Initializing Log");
}
