#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void insertValues(int OriginalArray[], int inputValue, int insertPosition, int oprArray[], int length);

int main() {
	int insertValue, position = 0, length = 0;
	int sortedArray[6] = { 3,10,15,30,55,77 };
	int insertedArray[7];

	puts("Input a Integer:");
	scanf("%d", &insertValue);

	length = sizeof(sortedArray) / sizeof(sortedArray[0]);
	for (position = 0; position < length; position++) {
		if (sortedArray[position] > insertValue) {
			break;
		}
	}

	insertValues(sortedArray, insertValue, position, insertedArray, length);
	for (int i = 0; i < 7; i++) {
		printf("%d ", insertedArray[i]);
	}
	printf("\n");
	return 0;
}

void insertValues(int OriginalArray[], int inputValue, int insertPosition, int oprArray[], int length) {
	int i;
	for (i = 0; i < insertPosition; i++) {
		oprArray[i] = OriginalArray[i];
	}
	oprArray[i] = inputValue;
	do {
		i++;
		oprArray[i] = OriginalArray[i - 1];
	} while (i <= length);
}