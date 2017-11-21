#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float average(int inputs[], int item);

int main() {
	int dataSets[50];
	int i = 0;

	puts("Please input a sequence of integers end with -1:");
	scanf("%d", &dataSets[i]);
	while (dataSets[i] != -1) {
		i++;
		scanf("%d", &dataSets[i]);
	}

	printf("Average = %g\n", average(dataSets, i));
	return 0;
}

float average(int inputs[], int item) {
	int sum = 0;
	for (int i = 0; i < item; i++) {
		sum += inputs[i];
	}

	return sum * 1.0 / item;
}