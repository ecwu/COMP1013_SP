/*
	Zhenghao Wu l630003054
	- using %s to read a string and then find and print out the English letters only
	- Assume the number of chars in the string is less than 50.
*/
#include<stdio.h>

void lettersFilter(char original[], char result[]); // function prototype

int main() {
	char inputString[51], filteredString[51];

	puts("Please input a string less than 50 letters");
	scanf("%s", inputString);

	lettersFilter(inputString, filteredString); // call the function

	printf("%s\n", filteredString);
	return 0;
}

void lettersFilter(char original[], char result[]) {
	int oi = 0, ri = 0;
	while (original[oi] != '\0') {
		if ((original[oi] >= 65 && original[oi] <= 90) || (original[oi] >= 97 && original[oi] <= 122)) { // if the char is a letter
			result[ri] = original[oi];// write it into a new char array
			ri++;
		}
		oi++;
	}
	result[ri] = '\0'; // end the array with a '\0'
}