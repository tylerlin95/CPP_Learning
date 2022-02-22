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
    
    int example[5];
    int *ptr = example;

    example[0] = 7;
    std::cout << example[0] << std::endl;
    example[4] = 9;
    std::cout << example << std::endl;

    int a = example[0];
    std::cout << a << std::endl;

    for (int i=0; i<5; i++) {
        example[i] = i;
    }

    *(ptr + 2) = 9;

    for (int i=0; i<5; i++) {
        std::cout << example[i] << std::endl;
    }


    int *another = new int[5];
    for (int i=0; i<5; i++) {
        another[i] = 4 - i;
    }
    for (int i=0; i<5; i++) {
        std::cout << another[i] << std::endl;
    }
    std::cout << "Count example:" << sizeof(example)/sizeof(int) << std::endl;
    std::cout << "Count another:" << sizeof(another)/sizeof(int) << std::endl;
    delete[] another;



    return 0;
}