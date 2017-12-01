/*
	Zhenghao Wu l630003054
	find all the perfect numbers under 1000
	A perfect number is a positive integer that is equal to the sum of its proper positive divisors
*/
#include <stdio.h>
int main(void){
	for (int i = 2; i < 1000; i++){
		int divisors[50], index = 0, sum = 0;
		for (int j = 1; j <= i / 2; j++){// find out all the positive divisors of the number i
			if (i % j == 0){
				divisors[index] = j;// save the positive divisors to an array
				index++;
			}
		}
		for (int k = 0; k < index; k++){
			sum += divisors[k]; // calculate the sum of all positive divisors
		}
		if (sum == i){// check the number is a perfect number or not
			printf("%d is a prefect number!\n", i);
		}
	}
	return 0;
}
