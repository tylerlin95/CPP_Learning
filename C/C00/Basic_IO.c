/**************************************************
 * FileName: Basic_IO.c
 * Usage: $make
 * Description: Use "make" command to run this program.
 * Dependency: ...
 * Author: Lynn <lynn840429@gmail.com>
 * Version: ...
 **************************************************/
/*** Include Packages ***/
#include <stdio.h>
#include <stdlib.h>

/*** User Defined Parameters ***/
// PARAMETER_1 = 1

/*** Folder/Path/Parameters Setting ***/
// FOLDER_1 = "./"
// PATH_1 = "./"
// GLONAL_CONSTANT_NAME = 1

/*** Main ***/
int main() {
  /***
   * Process Info: ...
   ***/
  short a1 = 1;
  short b1 = 32767;
  short c1 = -32767;

  short int a2 = 1;
  short int b2 = 32767;
  short int c2 = -32767;

  printf("%hd\n", a1);
  printf("%hd\n", b1);
  printf("%hd\n", c1);



  int a = 0b00001010;//10
	int b = 0b00000011;//3
	int c = 0x0;
  
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("a & b = %d\n", a & b);
	printf("a | b = %d\n", a | b);
	printf("a ^ b = %d\n", a ^ b);
	printf("a << b = %d\n", a << b);
	printf("a >> b = %d\n", a >> b);
	printf("~c = %x\n", ~c);

  return 0;
}
