# include <stdio.h>
# include <string.h>
# include <math.h>

float floatConvert(char inputs[], int sign);
int intConvert(char inputs[], int sign);
int plusMinusChecker(char inputs[]);
int dotChecker(char inputs[]);
int validChecker(char inputs[], int signStatus, int floatStatus);

int main() {
	char inputs[100];
	int sign = 0, floatStatus = 0, intConverted = 0;
	float floatConverted = 0.0;

	puts("Please input a number:");
	scanf("%s", inputs);
	sign = plusMinusChecker(inputs);
	floatStatus = dotChecker(inputs);
	if (validChecker(inputs, sign, floatStatus)) {
		puts("Invalid Inputs");
		return -1;
	}

	if (floatStatus) {
		floatConverted = floatConvert(inputs, sign);
		printf("sign = %d, PM = %d\n%f\n", sign, floatStatus, floatConverted);
	}
	else {
		intConverted = intConvert(inputs, sign);
		printf("sign = %d, PM = %d\n%d\n", sign, floatStatus, intConverted);
	}

	
	return 0;
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

float floatConvert(char inputs[], int sign) {
	float num = 0.0;
	int signStart = 0, afterDot = 0, decimal = 0;
	for (int i = 0; i < strlen(inputs); i++) {
		switch (inputs[i]) {
		case 45:
			break;
		case 46:
			signStart = 1;
			break;
		default:
			if (!signStart) {
				num *= 10;
				num += int(inputs[i]) - 48;
			}
			else {
				afterDot *= 10;
				afterDot += int(inputs[i]) - 48;
				decimal++;
			}
		}
	}
	num = num + (afterDot * pow(double(10), (-decimal)));
	if (sign){
		num = -num;
	}
	return num;
}

int intConvert(char inputs[], int sign) {
	int num = 0;
	for (int i = 0; i < strlen(inputs); i++) {
		switch (inputs[i]) {
		case 45:
			break;
		default:
				num *= 10;
				num += int(inputs[i]) - 48;
		}
	}
	if (sign){
		num = -num;
	}
	return num;
}