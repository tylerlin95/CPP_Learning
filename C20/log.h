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
    private:
        int m_LogLevel = LogLevelInfo;

    public:
        const int LogLevelInfo = 2;
        const int LogLevelWarning = 1;
        const int LogLevelError = 0;

        void set_level(int level)
        {
            m_LogLevel = level;
        }
        
        void info(const char *message)
        {
            if (m_LogLevel >= LogLevelInfo)
                std::cout << "[INFO]: " << message << std::endl;
        }

        void warn(const char *message)
        {
            if (m_LogLevel >= LogLevelWarning)
                std::cout << "[WARNING]: " << message << std::endl;
        }

        void error(const char *message)
        {
            if (m_LogLevel >= LogLevelError)
                std::cout << "[ERROR]: " << message << std::endl;
        }
};

struct Vec
{
    float x, y;
    
};



#endif