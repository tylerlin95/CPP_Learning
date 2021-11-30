/**************************************************
 * FileName: Main.cpp
 * Usage: $ make
 * Description: ...
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
// #include <>
#include <iostream>



/*** User Defined Parameters ***/
// PARAMETER_1 = 1



/*** Folder/Path/Parameters Setting ***/
// FOLDER_1 = "./"
// PATH_1 = "./"
// GLONAL_CONSTANT_NAME = 1



/*** Class ***/
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



/*** Function ***/
// int function_name(int p)
// {
//     /***
//      * Function Info: ...
//      ***/
//     return 0;
// }

int multiply(int a, int b)
{
    return a*b;
}

void multiply_and_log(int a, int b)
{
    int result = multiply(a, b);
    std::cout << result << std::endl;
}



/*** Main ***/
int main()
{
    /***
     * Process Info: ...
     ***/
    multiply_and_log(3, 2);
    multiply_and_log(333, 222);

    return 0;
}