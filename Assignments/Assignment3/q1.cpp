/*
	Zhenghao Wu l630003054
	- read an integer from keyboard
	- insert this value into proper place of the array {3, 10, 15, 30, 55, 77} 
	- output the updated sorted array values
*/
#include<stdio.h>

void insertValues(int OriginalArray[], int inputValue, int insertPosition, int oprArray[], int length); // function prototype

int main() {
	int insertValue, position = 0, length = 0;
	int sortedArray[6] = { 3,10,15,30,55,77 };
	int insertedArray[7];

	puts("Input a Integer:");
	scanf("%d", &insertValue); // read the insert Value

	length = sizeof(sortedArray) / sizeof(sortedArray[0]); // calculate the length of the original array
	for (position = 0; position < length; position++) { 
		if (sortedArray[position] > insertValue) {
			break; // find out the position(index) the insert value should go
		}
	}

	insertValues(sortedArray, insertValue, position, insertedArray, length); // insert the value
	for (int i = 0; i < 7; i++) {
		printf("%d ", insertedArray[i]); // print out the value
	}
	printf("\n");
	return 0;
}

void insertValues(int OriginalArray[], int inputValue, int insertPosition, int oprArray[], int length) {
	int i;
	for (i = 0; i < insertPosition; i++) {
		oprArray[i] = OriginalArray[i]; //write the value before the insert index to the new value
	}
	oprArray[i] = inputValue; // write the insert value
	do {
		i++;
		oprArray[i] = OriginalArray[i - 1]; // write the rest value to the array
	} while (i <= length);
}