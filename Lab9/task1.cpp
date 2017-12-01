#include <stdio.h>
int Fac (int n);
int main () {
	int number = 0;

	puts("Please input an positive integer:");
	scanf("%d", &number);

	printf("%d! = %d\n", number, Fac(number));
	return 0;
}
int Fac (int n){
	if (n <= 1){
		return 1;
	}
	return (n * Fac(n-1));
}