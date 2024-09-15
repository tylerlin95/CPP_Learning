/**************************************************
 * FileName: Main.cpp
 * Usage: $ make
 * Description: ...
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
// #include <>
#include <iostream>
#include "log.h"



/*** User Defined Parameters ***/



/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    int x = 5;
    bool comparison_result = true;

    if (comparison_result) {
        Log("Hello World!");
    }

    const char *ptr = "Hello";
    if (ptr=="Hello") {
        InitLog();
    }
    else if (ptr=="Hellow") {
        Log("Ptr is Hellow!");
    }
    else {
        Log("Ptr is null!");
    }

    return 0;
}