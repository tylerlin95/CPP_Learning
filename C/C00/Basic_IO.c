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
  /* Variables */
  // short a1 = 1;
  // short b1 = 32767;
  // short c1 = -32767;

  // short int a2 = 1;
  // short int b2 = 32767;
  // short int c2 = -32767;

  // printf("%hd\n", a1);
  // printf("%hd\n", b1);
  // printf("%hd\n", c1);

  /* Opperations */
  // int a = 0b00001010;//10
	// int b = 0b00000011;//3
	// int c = 0x0;
  
  // printf("a = %d\n", a);
  // printf("b = %d\n", b);
  // printf("c = %d\n", c);
  // printf("a & b = %d\n", a & b);
	// printf("a | b = %d\n", a | b);
	// printf("a ^ b = %d\n", a ^ b);
	// printf("a << b = %d\n", a << b);
	// printf("a >> b = %d\n", a >> b);
	// printf("~c = %x\n", ~c);

  /* Switch */
  // int a = 5;
	// int b = 2;
  // int res = (a - b);
  // int out = 0;

  // switch(res) {
  //   case 1:
  //       //do1
  //       out = 1;
  //       break;
  //   case 2:
  //       //do2
  //       out = 2;
  //       break;
  //   case 3:
  //       //do3
  //       out = 3;
  //       break;
  //   default:
  //       //do4 
  //       out = 0;   
  // }

  /* Continue */
  // int i;
  // int arr_len = 10;
  // int arr[arr_len];

  //   for (i = 0; i < arr_len; i++) {
  //     //printf("%d:", i);
  //     arr[i] = i;
  //     if (i % 5 == 0) {
  //       //printf("i am 5\n");
  //       continue;
  //     }
  //     //printf("i am not 5\n");
  //   }

  /* 泡沫排序法 */
  int i, j, k, temp;
    int test[5] = { 4,3,2,5,1 };
    for (i = 0; i < 5 - 1; i++) {
      for (j = 0; j < 5 - i - 1; j++) {
        //see progress
        printf("\ni,j:%d,%d : ", i, j);
        for (k = 0; k < 5; k++) {
          printf("%d ", test[k]);
        }
        //end
        if (test[j] > test[j + 1]) {
          temp = test[j];
          test[j] = test[j + 1];
          test[j + 1] = temp;
          printf("swap");
        }
      }
    }
    //see end
    printf("\nend     : ");
    for (k = 0; k < 5; k++) {
      printf("%d ", test[k]);
    }
    //end

  return 0;
}
