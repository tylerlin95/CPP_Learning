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



/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    std::cout << "Hello World!" << std::endl;
    
    Entity *e = new Entity();
    std::cout << e->GetName() << std::endl;
    PrintName(e);

    Player *p = new Player("Lynn");
    std::cout << p->GetName() << std::endl;
    PrintName(p);
    


    return 0;
}