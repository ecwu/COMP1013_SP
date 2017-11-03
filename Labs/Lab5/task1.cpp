/*
	Zhenghao Wu l630003054
	Output a patten like this:
	*******
	******
	*****
	****
	***
	**
	*
	requirement: for statement
*/
#include <stdio.h>
int main () {
	for (int i = 7; i > 0; i--){ //the 8 - i line of the patten
		for (int j = i; j > 0; j--){ // print i "*" in the line
			printf("*");
		}
		printf("\n");//print a line breaker for every line
	}
	return 0;
}