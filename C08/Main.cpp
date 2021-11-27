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



/* Main */
int main()
{
    // bool: 1byte
    // char: 1 byte
    // short: 2 bytes
    // int = long: 4 bytes
    // long long: 8 bytes
    // float: 4 bytes
    // double: 8 bytes

    bool var_bool = true;
    std::cout << var_bool << ", " << sizeof(var_bool) << std::endl;

    char var_char = 'A';
    std::cout << var_char << ", " << sizeof(var_char) << std::endl;
    var_char = 66;
    std::cout << var_char << ", " << sizeof(var_char) << std::endl;

    int var_int = 8;   // -2 billion ~ 2 billion
    std::cout << var_int << ", " << sizeof(var_int) << std::endl;
    var_int = 20;
    std::cout << var_int << ", " << sizeof(var_int) << std::endl;

    unsigned int var_unsign_int = 8;
    std::cout << var_unsign_int << ", " << sizeof(var_unsign_int) << std::endl;

    float var_float = 5.5f;
    std::cout << var_float << ", " << sizeof(var_float) << std::endl;

    double var_double = 5.2;
    std::cout << var_double << ", " << sizeof(var_double) << std::endl;

    return 0;
}