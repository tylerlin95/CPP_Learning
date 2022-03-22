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
//#include "log.h"



/*** User Defined Parameters ***/
//#define LOG(x) std::cout << x << std::endl;
static int s_Level = 1;
static int s_Speed = 2;



/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    std::cout << "Hello World!" << std::endl;

    if (s_Level > 5)
        s_Speed = 10;
    else
        s_Speed = 5;

    std::cout << s_Speed << std::endl;

    s_Speed = (s_Level<5) ? 10:5;
    std::cout << s_Speed << std::endl;

    s_Speed = (s_Level>5) ? (s_Level>10) ? 15:10:5;
    std::cout << s_Speed << std::endl;

    std::string rank = (s_Level>10) ? "Master":"Beginner";
    std::cout << rank << std::endl;



    return 0;
}