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
			printf("*");
		}
		for (int j = 0; j < i; j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
