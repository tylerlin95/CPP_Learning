#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LENGTH 80

int main() {

	char str1[LENGTH] = "+100";
	char str2[LENGTH] = "-100";
	char str3[LENGTH] = "12.3e+3";

	printf("%d\n", atoi(str1));
	printf("%ld\n", atol(str2));
	printf("%f\n", atof(str3));
	
	return 0;
}