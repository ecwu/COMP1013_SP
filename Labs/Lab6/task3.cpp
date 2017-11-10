/*
	Zhenghao Wu l630003054
	Write a program to read a sequence of positive integers and sort them in ascending order. Use -1 to indicate the end of numbers.
*/
#include <stdio.h>
int main(void){
	int number[100], length = 0, temp = 0, a, b, i = 0;
	do{
		int buffer = 0;
		printf("please input the No.%d positive number: \n", i+1);
		scanf("%d", &buffer);
		if (buffer == -1){
			break;
		}
		number[i] = buffer;
		i++;
		length ++;
	}
	while(i < 100);

	printf("Original Array:\n");
	for (int i = 0; i < length; i++){
		printf("%d ", number[i]);
	}

	for (a = 0; a < length - 1; a++){
		for (b = 0; b < length - a - 1; b++){
			if (number[b] > number[b+1]){
				temp = number[b];
				number[b] = number[b+1];
				number[b+1] = temp;
			}
		}
	}
	printf("Sorted Array:\n");
	for (int i = 0; i < length; i++){
		printf("%d ", number[i]);
	}
	return 0;
}