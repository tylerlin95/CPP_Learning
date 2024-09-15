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



/*** User Defined Parameters ***/
#define LOG(x) std::cout << x << std::endl;


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
    Function();
    Function();
    Function();
    


    return 0;
}