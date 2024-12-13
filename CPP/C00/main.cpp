// =====================================
// FileName: Main.cpp
// Usage: $ make
// Description: ...
// Dependency: ...
// Author: Lynn <lynn840429@gmail.com>
// Version: ...
// =====================================
/* Include Packages */
#include <iostream>



/* User Defined Parameters */
// PARAMETER_1 = 1

#define ENABLE_DEBUG // 注释掉这一行，可以禁用掉调试输出



/* Folder/Path/Parameters Setting */
// FOLDER_1 = "./"
// PATH_1 = "./"
// GLONAL_CONSTANT_NAME = 1



/* Class */
// class ClassName(object):
// 	"""
// 	Class Info: 
// 	"""
// 	def __init__():
// 		pass
	
// 	def function_name(self, ):
// 		"""
// 		Function Info: ...
// 		"""
// 		pass



/* Function */
// def function_name():
// 	"""
// 	Function Info: ...
// 	"""
// 	var_name = 1

int getUserInput()
{
    #ifdef ENABLE_DEBUG
    std::cerr << "getUserInput() called\n";
    #endif

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}



/* Main */
int main()
{
    std::cout << "CPP Test" << std::endl;

    #ifdef ENABLE_DEBUG
    std::cerr << "main() called\n";
    #endif

    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}