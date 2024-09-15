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
    /// continue
    for (int iter=0; iter<5; iter++) {
        if (iter%2==0)
            continue;
        std::cout << iter << " ";
        Log("continue: Hello World!");
    }

    /// break
    for (int iter=0; iter<5; iter++) {
        if ((iter+1)%2==0)
            break;
        std::cout << iter << " ";
        Log("break: Hello World!");
    }

    /// return
    for (int iter=0; iter<5; iter++) {
        if ((iter+1)%2==0)
            return 0;
        std::cout << iter << " ";
        Log("return: Hello World!");
    }



    return 0;
}