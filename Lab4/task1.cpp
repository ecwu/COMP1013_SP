/*
	Zhenghao Wu l630003054
	Read an amount of US dollars and change to the Euro or RMB.
	Output the amount of Euro or RMB depending on the choice by the user. 
*/
# include <stdio.h>
int main () {
	int aim = 0;
	float us;

	printf("Please input a U.S. Dollars value: ");
	scanf("%f", &us);// read a usd value into a float type variable

	printf("What currency you want to convert to?\nInput '0' to convert to Euro\nInput '1' to convert to RMB\n");
	scanf("%d", &aim);// read a convert aim value(0 for euro, 1 for RMB)

	if(aim){
		printf("The amount of U.S. Dollars in RMB are %.2f\n", us * 6.5); // convert and output a float number with 2 decimal(RMB)
	}else {
		printf("The amount of U.S. Dollars in Euro are %.2f\n", us * 0.9);// convert and output a float number with 2 decimal(Euro)
	}
	return 0;
}