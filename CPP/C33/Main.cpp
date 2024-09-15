/**************************************************
 * FileName: Main.cpp
 * Usage: $ make
 * Description: ...
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
#include <iostream>
#include <string>
#include <stdlib.h>
#include "log.h"



/*** User Defined Parameters ***/
//#define LOG(x) std::cout << x << std::endl;



/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    std::cout << "Hello World!" << std::endl;
    const int MAX_AGE = 90;
    int *a = new int;

    *a = 3;
    std::cout << *a << std::endl;

    a = (int*)&MAX_AGE;
    std::cout << *a << std::endl;



    return 0;
}