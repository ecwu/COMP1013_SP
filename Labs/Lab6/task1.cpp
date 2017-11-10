/*
	Zhenghao Wu l630003054
	Output a patten like this:
	*******
	******#
	*****##
	****###
	***####
	**#####
	*######
*/
#include <stdio.h>
int main(void){
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7 - i; j++){
			// print (7 - i star(s)) in the i line
			printf("*");
		}
		for (int j = 0; j < i; j++){
			// print (i star(s)) in the i line
			printf("#");
		}
		// print a line feed (\n) in the end of every line
		printf("\n");
	}
	return 0;
}
