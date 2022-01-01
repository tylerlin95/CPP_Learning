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
int s_Variable_1 = 10;
extern int s_Variable_2;

void Function()
{
    
}

struct Entity
{
    /* data */
    int x, y;
    static int x_s, y_s;

    void Print()
    {
        std::cout << x << ": " << &x << ", " << y << ": " << &y << std::endl;
        std::cout << x_s << ": " << &x_s << ", " << y_s << ": " << &y_s << std::endl;
    }
};
int Entity::x_s;
int Entity::y_s;

static void Print(Entity e)
{
    std::cout << e.x << ": " << &e.x << ", " << e.y << ": " << &e.y << std::endl;
    std::cout << e.x_s << ": " << &e.x_s << ", " << e.y_s << ": " << &e.y_s << std::endl;
}




/*** Folder/Path/Parameters Setting ***/



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    std::cout << "Hello World!" << std::endl;
    Entity e;
    e.x = 2;
    e.y = 3;
    Entity::x_s = 2;
    Entity::y_s = 3;
    //e.Print();

    Entity e1;
    e1.x = 5;
    e1.y = 8;
    Entity::x_s = 5;
    Entity::y_s = 8;
    //e1.Print();

    //e.Print();

    Print(e);
    Print(e1);
    


    return 0;
}