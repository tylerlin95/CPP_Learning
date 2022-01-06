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
#include <cstring>
#include "log.h"



/*** User Defined Parameters ***/
#define LOG(x) std::cout << x << std::endl;


int a = 0;
int b = 1;
int c = 2;


enum Example: char
{
    A = 5, B, C, D
};


void Function()
{
    static int i = 0;
    i++;
    std::cout << "i=" << i << std::endl;

    int j = 0;
    j++;
    std::cout << "j=" << j << std::endl;
}



/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    std::cout << "Hello World!" << std::endl;
    Example value = B;
    LOG(B)

    Log log;
    log.set_level(Log::LevelError);
    log.error("Hello!");
    log.warn("Hello!");
    log.info("Hello!");
    


    return 0;
}