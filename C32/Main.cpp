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
#define LOG(x) std::cout << x << std::endl;



/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    std::cout << "Hello World!" << std::endl;

    std::string name = "Lynn";
    name += " hello";
    name[2] = 'a';
    std::cout << name << name.size() << std::endl;
    std::cout << name.find("an") << std::endl;

    PrintString(name);


    const char n[8] = "Lyn\0n";
    PrintString(n);


    using namespace std::string_literals;
    std::string name0 = "Lynn"s + " hello";
    const char *name1 = "Lynn";
    const wchar_t *name2 = L"Lynn";
    const char16_t *name3 = u"Lynn";
    const char32_t *name4 = U"Lynn";



    return 0;
}