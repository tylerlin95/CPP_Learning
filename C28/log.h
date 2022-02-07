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
class Printable
{
	/***
	 * Class Info: 
	 ***/
    public:
        virtual std::string GetClassName() = 0;
};


class Entity: public Printable
{
	/***
	 * Class Info: 
	 ***/
    public:
        virtual std::string GetName() { return "Entity"; }
        //std::string GetName() { return "Entity"; }
        std::string GetClassName() override { return "Entity"; }
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
        std::string GetClassName() override { return "Player"; }
};


class A: public Printable
{
    public:
        std::string GetClassName() /*override*/ { return "A"; }
};


void PrintName(Entity *en)
{
    std::cout << en->GetName() << std::endl;
}


void Print(Printable *obj)
{
    std::cout << obj->GetClassName() << std::endl;
}


#endif