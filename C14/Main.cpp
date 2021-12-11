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
#include "Log.h"



/*** User Defined Parameters ***/



/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    /// For Loop
    for (int iter=0; iter<5; iter++) {
        std::cout << iter << " ";
        Log("Hello World!");
    }

    int iter = 0;
    bool condition = true;
    for ( ; condition; ) {
        std::cout << iter << " ";
        Log("Hello World!");
        iter++;
        if (!(iter<5)) {
            condition = false;
        }
    }

    /// While Loop
    iter = 0;
    while (iter<5) {
        Log("Hello World!");
        iter++;
    }
    
    iter = 0;
    do {
        Log("Hello World!");
        iter++;
    } while (iter<5);


    return 0;
}