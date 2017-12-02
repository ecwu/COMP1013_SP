/*
	Zhenghao Wu l630003054

	- write a program to verify all the numbers under 1000 which are the multiple of 3
	- Use recursion.
	
*/
#include <stdio.h>
#include <math.h>

int verify(int n); // function prototype

int main(){
	int number = 0;

	puts("Please input a integer under 1000:");
	scanf("%d", &number);


	printf("It takes %d times to reach 153\n", verify(number)); // function call
	return 0;
}

int verify(int n){
	int a = 0, b = 0, c = 0, d = 0, digits = 0, caled = 0;

    for (int num = n; num > 0; num /= 10){
    	digits++; // read how many digits in this number
    }

    switch(digits){ // calculate each digit's number
    	case 4:
    		a = n / 1000 % 10;
    	case 3:
			b = n / 100 % 10;
		case 2:
			c = n / 10 % 10;
		case 1:
			d = n / 1 % 10;
			break;
    }
	
    caled = pow(double(a), 3) + pow(double(b), 3) + pow(double(c), 3) + pow(double(d), 3); // cube each digit

	if (caled == 153){
		return 1;// base case
	}

	return 1 + verify(caled); // recursion
}