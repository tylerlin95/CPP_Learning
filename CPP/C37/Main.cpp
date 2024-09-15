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

    Entity *e;
    {
        Entity *entity = new Entity("Lynn");
        e = entity;
        std::cout << entity->GetName() << std::endl;
        std::cout << &e << " " << e << std::endl;
        delete entity;
    }

    std::cout << &e << " " << e << std::endl;



    return 0;
}