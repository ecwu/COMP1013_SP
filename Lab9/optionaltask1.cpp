/*
	Zhenghao Wu l630003054

	- Write a program that includes two functions: main function, ZeroInBinary(n)
	- main Function reads a positive integer n
	- calls the function ZeroInBinary to compute the number of 0’s in n’s binary representation
	
*/
#include <stdio.h>

int ZeroInBinary(int n);

int main() {
	int number = 0;

	puts("Please input a positive integer:");
	scanf("%d", &number);


	printf("There are %d 0's in %d's binary representation", ZeroInBinary(number), number);
	return 0;
}

int ZeroInBinary(int n){
	if (n == 0){
		return 1;
	}else if (n == 1){
		return 0;
	}

	if (n % 2 == 0){
		return 1 + ZeroInBinary(n / 2);
	}else if (n % 2 != 0){
		return 0 + ZeroInBinary(n / 2);
	}
}