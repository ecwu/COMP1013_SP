#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void lettersFilter(char original[], char result[]);

int main() {
	char inputString[51], filteredString[51];

	puts("Please input a string less than 50 letters");
	scanf("%s", inputString);

	lettersFilter(inputString, filteredString);

	printf("%s\n", filteredString);
	return 0;
}

void lettersFilter(char original[], char result[]) {
	int oi = 0, ri = 0;
	while (original[oi] != '\0') {
		if ((original[oi] >= 65 && original[oi] <= 90) || (original[oi] >= 97 && original[oi] <= 122)) {
			result[ri] = original[oi];
			ri++;
		}
		oi++;
	}
	result[ri] = '\0';
}