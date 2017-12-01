/*
	Zhenghao Wu l630003054
	Write a program to read a sequence of positive integers and sort them in ascending order. Use -1 to indicate the end of numbers.
*/
#include <stdio.h>
int main(void){
	int number[100], length = 0, temp = 0, a, b, i = 0;
	do{
		int buffer = 0;
		printf("Please input the No.%d positive number (type -1 to stop): \n", i+1);
		scanf("%d", &buffer);
		// input data save to the buffer first
		if (buffer == -1){
			// check whether the input number is '-1' or not.
			break;// jump out of the loop when input is '-1'
		}
		number[i] = buffer;//write the buffer number to the number array
		i++;
		length ++;
	}
	while(i < 100);

	printf("Original Array:\n");
	for (int i = 0; i < length; i++){
		printf("%d ", number[i]);
		// print out the original array 
	}
	printf("\n");
	
	//using bubble sort to sort the array
	for (a = 0; a < length - 1; a++){
		for (b = 0; b < length - a - 1; b++){
			if (number[b] > number[b+1]){
				temp = number[b];
				number[b] = number[b+1];
				number[b+1] = temp;
				// move the biggest number to the end of the array
			}
		}
	}

	printf("Sorted Array:\n");
	for (int i = 0; i < length; i++){
		printf("%d ", number[i]);
		// print out the sorted array 
	}
	printf("\n");
	return 0;
}