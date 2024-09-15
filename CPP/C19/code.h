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
class Player
{
	/***
	 * Class Info: 
	 ***/
    public:
	    int x, y;
        int speed;
        
        void set_value(int xa, int ya, int speeda)
        {
            x = xa;
            y = ya;
            speed = speeda;
        }
        
        void move(int xa, int ya)
        {
            x += xa * speed;
            y += ya * speed;
        }

        void print_pos()
        {
            std::cout << x << ", " << y << std::endl;
        }
    
    private:

};

struct Vec
{
    float x, y;
    
};



#endif