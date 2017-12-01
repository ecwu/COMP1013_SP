/*
	Zhenghao Wu l630003054
	read a number string and output the number
	Assume the number string has only digit character or a sign character in front of digits.
*/
# include <stdio.h>
# include <string.h>
# include <math.h>

float floatConvert(char inputs[], int sign); // convert the string into float
int intConvert(char inputs[], int sign); // convert the string into int
int plusMinusChecker(char inputs[]); // check the number is a positive number or negative number
int dotChecker(char inputs[]); // check the number is a float or integer
int validChecker(char inputs[], int signStatus, int floatStatus); // check the input is convertable or not

int main() {
	char inputs[100];
	int sign = 0, floatStatus = 0, intConverted = 0;
	float floatConverted = 0.0;

	puts("Please input a number in string format:");
	scanf("%s", inputs); // read the whole string
	sign = plusMinusChecker(inputs);
	floatStatus = dotChecker(inputs);
	// storage sign and float status
	if (validChecker(inputs, sign, floatStatus)) {
		puts("Invalid Inputs");// output a waring and pause the program
		return -1;
	}

	if (floatStatus) {
		floatConverted = floatConvert(inputs, sign);// output the converted result. Precision lost may occur
		printf("String Convert to Float: %f\n", floatConverted);
	}
	else {
		intConverted = intConvert(inputs, sign);// output the converted result
		printf("String Convert to Int: %d\n", intConverted);
	}

	
	return 0;
}
int plusMinusChecker(char inputs[]) {// check the minus sign in the string
	int sign = 0;
	for (int i = 0; i < strlen(inputs); i++) {
		if (inputs[i] == '-') {
			sign = 1;
		}
	}
	return sign ? 1 : 0;
}
int dotChecker(char inputs[]) {// check the dot in the string(Float or Int)
	for (int i = 0; i < strlen(inputs); i++) {
		if (inputs[i] == '.') {
			return 1;
		}
	}
	return 0;
}

int validChecker(char inputs[], int signStatus, int floatStatus) {// whether the string valid or not (1 Invalid; 0 Valid)
	// ("-" not place at the correct place)
	if (signStatus) {
		if (inputs[0] != '-') {
			return 1;
		}
	}
	// ("." not place at the correct place)
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

float floatConvert(char inputs[], int sign) {// convert the string into float
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
				num += int(inputs[i]) - 48;//get the integer part
			}
			else {
				afterDot *= 10;
				afterDot += int(inputs[i]) - 48;//get the decimal part(in integer format)
				decimal++;
			}
		}
	}
	num = num + (afterDot * pow(double(10), (-decimal)));// assamble two parts together
	if (sign){
		num = -num; // inverse the number if the string has negative sign
	}
	return num;
}

int intConvert(char inputs[], int sign) {// convert the string into int
	int num = 0;
	for (int i = 0; i < strlen(inputs); i++) {
		switch (inputs[i]) {
		case 45:
			break;
		default:
				num *= 10;
				num += int(inputs[i]) - 48;//convert the integer part into number
		}
	}
	if (sign){
		num = -num;// inverse the number if the string has negative sign
	}
	return num;
}