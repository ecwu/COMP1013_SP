/*
	Zhenghao Wu l630003054
	
	- Write a program that includes two functions: main function, Power2(n).
	- main Function reads a positive integer
	- call the function Power2 to compute the 2^n.
*/
#include <stdio.h>
int Power2 (int n); // function prototype
int main () {
	int number = 0;

	puts("Please input a positive integer:");
	scanf("%d", &number); // read a positive integer

	printf("2^%d = %d\n", number, Power2(number)); // print and call the Power2 function
	return 0;
}
int Power2 (int n){
	if (n == 0){
		return 1; // the result of 0 power of every integer is 1 
	}
	if (n <= 1){
		return 2; // base case
	}
	return (2 * Power2(n-1)); // Recursion
}