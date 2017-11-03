/*
	Zhenghao Wu l630003054
	print out the pattern like the following:
	     *
	    ***
	   *****
	  *******
	 *********
	***********
	the number of * in each line is odd
	the number of * in the last line is inputted by user at the beginning.
	requirement: for statement
*/
#include <stdio.h>
int main () {
	int odd, lines = 0;
	printf("please input a odd number:");
	scanf("%d", &odd);
	if (odd % 2 == 0){
		printf("Invalid Input\n");
		return -1;
	}
	lines = (odd + 1) / 2;
	for (int i = lines; i > 0; i--){
		for (int k = i - 1; k > 0; k--){
			printf(" ");
		}
		for (int j = 0; j < (odd - 2 * i + 2); j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}