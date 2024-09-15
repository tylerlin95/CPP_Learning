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
    public:
        virtual std::string GetName() { return "Entity"; }
};


class Player: public Entity
{
	/***
	 * Class Info: 
	 ***/
    private:
        std::string m_Name;

    public:
        Player(const std::string &name): m_Name(name) {}

        std::string GetName() { return m_Name; }
};


void PrintName(Entity *en)
{
    std::cout << en->GetName() << std::endl;
}



#endif