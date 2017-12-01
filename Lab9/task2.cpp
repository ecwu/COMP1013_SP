#include <stdio.h>
int Power2 (int n);
int main () {
	int number = 0;

	puts("Please input a positive integer:");
	scanf("%d", &number);

	printf("2^%d = %d\n", number, Power2(number));
	return 0;
}
int Power2 (int n){
	if (n == 0){
		return 0;
	}
	if (n <= 1){
		return 2;
	}
	return (2 * Power2(n-1));
}