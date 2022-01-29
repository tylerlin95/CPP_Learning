/**************************************************
 * FileName: code.h
 * Usage: Declare Classes & Functions
 * Description: ...
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
#ifndef _CODE_H
#define _CODE_H
#include <iostream>



/*** Function Declaration ***/



/*** Class Definition ***/
class Entity
{
	/***
	 * Class Info: 
	 ***/
    private:

    public:
        float X, Y;

        Entity()
        {
            std::cout << "Created Entity!" << std::endl;
            X = 0.0f;
            Y = 0.0f;
        }

        Entity(float x, float y)
        {
            std::cout << "Created Entity!" << std::endl;
            X = x;
            Y = y;
        }

        ~Entity()
        {
            std::cout << "Destroyed Entity!" << std::endl;
        }

        void Print()
        {
            std::cout << X << ", " << Y << std::endl;
        }

        void move(float xa, float ya)
        {
            X += xa;
            Y += ya;
        }
};


class Player: public Entity
{
	/***
	 * Class Info: 
	 ***/
    private:

    public:
        const char *Name;
        
        void PrintName()
        {
            std::cout << X << ", " << Y << std::endl;
        }
};


#endif