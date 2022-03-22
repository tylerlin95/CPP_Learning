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

    Entity e0;
    std::cout << e0.GetName() << std::endl;

    Entity e1("Lynn");
    std::cout << e1.GetName() << std::endl;



    return 0;
}