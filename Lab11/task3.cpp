/*
	Author: Zhenghao Wu l630003054

	- read a sequence of data 
	- output the data in the reverse order
	- Array is not allowed to be used
	- The total number of the data is inputted by user
	- The memory should be dynamically allocated
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *set;
	int length;

	puts("Input how many integer you want to input?")
	scanf("%d", length);

	set = (int*)malloc(length * sizeof(int));

	return 0;
}