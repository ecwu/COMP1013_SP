/*
	Zhenghao Wu l630003054
	Output a patten like this:
	*#*#*#*#*#*
	*#*#*#*#*
	*#*#*#*
	*#*#*
	*#*
	*
	requirement: for statement
*/
#include <stdio.h>
int main () {
	for (int i = 6; i > 0; i--){ 
		printf("*");//everyline begin with a "*"
		for (int j = i-1; j > 0; j--){ 
			printf("#*");//print i-1 "*#" combination
		}
		printf("\n");//print a line feed
	}
	return 0;
}