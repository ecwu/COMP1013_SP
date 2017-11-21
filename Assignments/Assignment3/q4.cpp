#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fac(int n);

int main() {
	int a, b, c;
	puts("Please input 3 natural numbers, separate with space");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d!+%d!%d! = %d\n", a, b, c, fac(a)+fac(b)+fac(c));
	return 0;
}

int fac(int n) {
	if (n < 0) {
		puts("Invaild Input");
		return -1;
	}
	if (n <= 1) {
		return 1;
	}
	return (fac(n - 1)*n);
}