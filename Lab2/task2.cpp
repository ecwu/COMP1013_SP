#include <stdio.h>
int main() {
	int percentage, x;
	char ch1, ch2;
	scanf("%d%c%c%d", &percentage, &ch1, &ch2, &x);
	printf("%d%% %c%c %d is %f\n", percentage, ch1, ch2, x, 1.0 * x * percentage / 100);
	return 0;
	//input: "25of60" output: "25% of 60 is 15.000000"
	//input: "25 of60" output: "25%  o -858993460 is -214748365.000000"
	//input: "25 of 60" output: "25%  o -858993460 is -214748365.000000"
}