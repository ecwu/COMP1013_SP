/*
	Zhenghao Wu l630003054
	calculate the number of digits in a positive integer 
	whether this positive integer is a perfect square.
	requirement: No function
*/
#include <stdio.h>
int main () {
	int n, processed, digits = 0, indicator = 0;

	printf("Please input an positive integer\n");
	scanf("%d", &n);
	processed = n;
	//assign the input value(n) to a variable(processed), not change the original

	while (processed> 0){// check if the input is greater than 0
		processed = processed / 10;
		digits += 1;//calculate the number of digits of the input integer
	}
	if (digits> 0){
		printf("there are %d digit(s) in the number %d\n", digits, n);
	}else if (n <= 0){//if the integer is smaller then 1, output an error message
		printf("Invalid Input\n");
	}

	for (int i = 2; i <= n / 2; i++){// check every number less than n/2
		if (i*i == n){//if there is a number is the the square number of n
			indicator = 1;//change the indicator
			break;
		}
	}
	if (indicator){// check if the is a match
		printf("%d is a perfect square\n", n);
	}else{
		printf("%d is not a perfect square\n", n);
	}
	return 0;
}