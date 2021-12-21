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
#include "code.h"



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
    Player player;
    player.set_value(1, 1, 5);

    player.print_pos();
    player.move(1, -1);
    player.print_pos();


    return 0;
}