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



/*** Folder/Path/Parameters Setting ***/



/*** Function ***/
void increment(int *value)
{
    std::cout << "Ptr:";
    LOG(*value);
    (*value)++;
    std::cout << "Ptr:";
    LOG(*value);
}

void increment(int &value)
{
    std::cout << "Ref:";
    LOG(value);
    value++;
    std::cout << "Ref:";
    LOG(value);
}



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    std::cout << "Hello World!" << std::endl;

    int var = 8;
    int var2 = 10;
    int *ptr = &var;
    int &ref = var;
    ref = 2;
    increment(&var);
    increment(var);

    LOG(ref);
    LOG(&ref);
    LOG(&var);
    LOG(&ptr);

    // int &ref2;   Error
    ref = var2;
    LOG(var);
    LOG(&var);
    LOG(var2);
    LOG(&var2);



    return 0;
}