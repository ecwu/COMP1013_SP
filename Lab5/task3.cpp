/*
	Zhenghao Wu l630003054
	add all the positive integers that satisfy the following conditions:
	1. the integer is under 1000.
	2. the integer is multiple of 3
	3. the integer is not multiple of 5
*/
#include <stdio.h>
int main () {
	int sum = 0;
	for (int i = 1; i < 1000; i++){// for every number under 1000
		if (i % 3 == 0 && !(i % 5 == 0)){// if the integer is multiple of 3 and not multiple of 5
			sum += i; // satisfy, add to the sum veriable
		}
	}
	printf("The sum of all the positive integers that satisfy the conditions are: %d\n", sum);
	return 0;
}