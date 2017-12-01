/*
	Zhenghao Wu l630003054
	- read a sequence of integers which end at ‐1
	- Store them in an array
	- call a sub‐function average to calculate the average of the input integers
*/
#include<stdio.h>

float average(int inputs[], int item); // sub-function prototype

int main() {
	int dataSets[50];
	int i = 0;

	puts("Please input a sequence of integers end with -1:");
	scanf("%d", &dataSets[i]); // read a sequence of integers
	while (dataSets[i] != -1) {
		i++;
		scanf("%d", &dataSets[i]);
	}

	printf("Average = %g\n", average(dataSets, i)); // call and print out the value
	return 0;
}

float average(int inputs[], int item) {
	int sum = 0;
	for (int i = 0; i < item; i++) {
		sum += inputs[i]; // calculate the sum for every array element
	}

	return sum * 1.0 / item; // return the average
}