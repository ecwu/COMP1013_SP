/*
	Author: Zhenghao Wu l630003054
	- a sequence of number a1, a2, a3, …, an
	- an = 2a(n-1)+1, a1 = 2.

	- write a program to find a16. Use recursive function.
*/

# include <stdio.h>
int findAn(int n); // function prototype

int main (){
	int find = 16;

	printf("a%d = %d\n", find, findAn(find)); // function call

	return 0;
}

int findAn(int n){
	if (n == 1){
		return 2; // base case
	}

	return 2 * (findAn(n - 1)) + 1; // recursion
}