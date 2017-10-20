/*
	Zhenghao Wu l630003054
	input 2 integers value a and b, then print the smaller one between a and b
	special requirement: no if statement
*/
#include <stdio.h>
int main(){
	int a, b, small;

	printf("please input two integers\n");
	scanf("%d%d", &a, &b);

	small = (a > b)? b : a;
	// using a ternary operator to assign the smaller number to the variable small
	// if a > b is true, then assign b to the variable
	// if a > b is false, then assign a to the variable

	printf("the smaller number between %d and %d is %d\n", a, b, small);
	return 0;
}