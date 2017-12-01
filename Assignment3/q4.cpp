/*
	Zhenghao Wu l630003054
	- calculate a!+b!+c!
	- function fac to calculate factorial of a natural number
*/
#include<stdio.h>

int fac(int n);

int main() {
	int a, b, c;
	puts("Please input 3 natural numbers, separate with space");
	scanf("%d%d%d", &a, &b, &c); // read 3 integer
	printf("%d!+%d!%d! = %d\n", a, b, c, fac(a)+fac(b)+fac(c)); // call the function and print out the value
	return 0;
}

int fac(int n){ // using Recursion to finish this function
	if (n < 0) {
		puts("Invaild Input"); // output a error message if the input is invaild
		return 0;
	}
	if (n <= 1) {
		return 1;
	}
	return (fac(n - 1) * n); // Recursion
}