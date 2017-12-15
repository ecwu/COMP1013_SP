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
	int length = 0, temp = 0; 

	puts("Input how many integer you want to input?");
	scanf("%d", &length); // ask user to input how many integer they want to input

	int* set = (int*)malloc(length * sizeof(int)); // allocate memory base on users input
	if (set){ // if the memory allocated
		for(int i = 0; i < length; i++){ // ask user to input a sequence of integer
			printf("Input NO.%d number\n", i+1);
			scanf("%d", &set[i]);
		}
	}

	length --; // make length start from 0

	for(int i = 0; i < length / 2; i++){ // swap the head and tail elements
			temp = set[i];
			set[i] = set[length - i];
			set[length - i] = temp;
		}

	for (int i = 0; i <= length; i++){ // output the elements one by one (reverse order)
		printf("%d ", set[i]);
	}
	printf("\n");

	free(set); // free the memory

	return 0;
}