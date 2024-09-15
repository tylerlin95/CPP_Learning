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
#include <cstring>



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

    int var = 8;
    int *ptr = nullptr;
    ptr = &var;
    LOG(ptr);
    LOG(&var);
    LOG(&ptr);
    LOG(*ptr);
    LOG(var);

    *ptr = 10;
    LOG(ptr);
    LOG(&var);
    LOG(&ptr);
    LOG(*ptr);
    LOG(var);

    char *buffer = new char[8];
    char **ptr_buffer = &buffer;
    memset(buffer, 'a', 8);
    LOG(ptr_buffer);
    LOG(&buffer);
    LOG(&ptr_buffer);
    LOG(*ptr_buffer);
    LOG(buffer);
    delete[] buffer;



    return 0;
}