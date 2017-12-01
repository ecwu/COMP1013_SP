/*
	Zhenghao Wu l630003054

	- Write a program that includes two functions: main function, Fac(n)
	- main Function reads a positive integer n
	- and calls the function Fac to compute the factorial number of n

	requirement: Do not refer to the function in the lecture note
*/
#include <stdio.h>
int Fac (int n); // function prototype
int main () {
	int n = 0;

	puts("Please input a positive integer:");
	scanf("%d", &n); // read a positive integer

	printf("%d! = %d\n", n, Fac(n)); // print and call the Fac function
	return 0;
}
int Fac (int n){
	if (n < 0){ // if the number is not a positive integer
		return -1; // return a error number
	}
	if (n <= 1){ 
		return 1; // base case
	}
	return (n * Fac(n-1)); // Recursion
}