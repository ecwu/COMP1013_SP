#include<stdio.h>
int main(){
	int num1, num2;
	printf("Please input two integers\n");
	scanf("%d%d", &num1, &num2);
	printf("%d/%d=%.2f\n", num1, num2, (num1*1.0)/(num2*1.0));
		//print float number with 2 decimal:https://stackoverflow.com/questions/1343890/rounding-number-to-2-decimal-places-in-c
	return 0;
}