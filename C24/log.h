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
class Log
{
	/***
	 * Class Info: 
	 ***/
    public:
        enum Level
        {
            LevelError=0, LevelWarning, LevelInfo
        };

    private:
        Level m_LogLevel = LevelInfo;

    public:
        void set_level(Level level)
        {
            m_LogLevel = level;
        }
        
        void info(const char *message)
        {
            if (m_LogLevel >= LevelInfo)
                std::cout << "[INFO]: " << message << std::endl;
        }

        void warn(const char *message)
        {
            if (m_LogLevel >= LevelWarning)
                std::cout << "[WARNING]: " << message << std::endl;
        }

        void error(const char *message)
        {
            if (m_LogLevel >= LevelError)
                std::cout << "[ERROR]: " << message << std::endl;
                // std::cout << &message << std::endl;
                // std::cout << *message << std::endl;
        }
};

struct Vec
{
    float x, y;
    
};



#endif