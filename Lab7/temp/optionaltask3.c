#define _CRT_SECURE_NO_DEPRECATE
# include <stdio.h>
# include <string.h>

int floatConvert(char inputs[]);
int intConvert(char inputs[]);
int plusMinusChecker(char inputs[]);
int dotChecker(char inputs[]);
int validChecker(char inputs[], int signStatus, int floatStatus);

int main() {
	char inputs[100];
	int sign = 0, floatStatus = 0;

	puts("Please input a number:");
	scanf("%s", inputs);
	sign = plusMinusChecker(inputs);
	floatStatus = dotChecker(inputs);
	if (validChecker(inputs, sign, floatStatus)) {
		puts("Invalid Inputs");
		return -1;
	}
	printf("sign = %d, PM = %d\n", sign, floatStatus);

}
int plusMinusChecker(char inputs[]) {
	int sign = 0;
	for (int i = 0; i < strlen(inputs); i++) {
		if (inputs[i] == '-') {
			sign = 1;
		}
	}
	return sign ? 1 : 0;
}
int dotChecker(char inputs[]) {
	for (int i = 0; i < strlen(inputs); i++) {
		if (inputs[i] == '.') {
			return 1;
		}
	}
	return 0;
}

int validChecker(char inputs[], int signStatus, int floatStatus) {
	if (signStatus) {
		if (inputs[0] != '-') {
			return 1;
		}
	}
	else if (floatStatus) {
		if (inputs[strlen(inputs) - 1] == '.') {
			return 1;
		}
	}
	else {
		return 0;
	}
	return 0;
}