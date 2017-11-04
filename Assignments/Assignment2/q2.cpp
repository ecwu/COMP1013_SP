/*
	Zhenghao Wu l630003054
	calculate 2^n+3^n, which n is a natural number
	requirement: No function
*/
#include <stdio.h>
int main () {
	int exp = 0, sum = 0;
	printf("Input a nature number exponential: \n");
	scanf("%d", &exp);
	if (exp < 0){
		printf("Invalid Input\n");
		return -1; // stop the program
	}
	if (exp != 0){ //check if the input number is a 0
		int twop = 2, threep = 3;
		for(int i = 1; i < exp; i++){// do the exponential operation for 2 & 3
			twop *= 2;
			threep *= 3;
		}
		sum = twop + threep;// sum up the results
	}else{
		sum = 2;// if the input number is 0
	}
	printf("the answer of 2^%d + 3^%d = %d\n", exp, exp, sum);
	return 0;
}