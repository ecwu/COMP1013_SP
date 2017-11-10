#include <stdio.h>
int main(void){
	for (int i = 2; i < 1000; i++){
		int divisors[50], index = 0, sum = 0;
		for (int j = 1; j <= i / 2; j++){
			if (i % j == 0){
				divisors[index] = j;
				index++;
			}
		}
		for (int k = 0; k < index; k++){
			sum += divisors[k];
		}
		if (sum == i){
			printf("%d is a prefect number!\n", i);
		}
	}
	return 0;
}
