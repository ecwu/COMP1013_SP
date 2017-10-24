/*
	Author: Zhenghao Wu l630003054
	Input a positive integer (1~999), calculate the number of digits in this input integer
*/
#include <stdio.h>
int main(){
	int n, processed, digits = 0;

	printf("Please input an positive integer\n");
	scanf("%d", &n);
	processed = n;
	//assign the input value(n) to a variable(processed) to be processed

	while (processed > 0 && processed <= 999){//if the input integer is in the correct range(0~999)
		processed = processed / 10;
		digits += 1;//calculate the number of digits of the input integer
	}
	if (digits > 0){
		printf("there are %d digit(s) in the number %d\n", digits, n);
	}else if (n <= 0){//if the integer is smaller then 1, output an error message
		printf("Invalid Input\n");
	}else {//if the integer is greater then 999, output a warning message
		printf("The input is too big\n");
	}
	return 0;
}