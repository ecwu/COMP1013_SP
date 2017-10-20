#include <stdio.h>
int main (){
	int x = 30, y = 30, z = 40;
	int temp1, temp2;

	temp1 = x / ++y + z /y;
	printf("temp1= %3d\ty= %d\n", temp1, y);
	
	y = 30;
	temp2 = x / y++ + z /y;
	printf("temp2= %3d\ty= %d\n", temp2, y);
	return 0;
}

/* 
My Answer:
print1: temp1=  1 	y= 31
print2: temp2=  2	y= 31
*/

/*
%3d:
It means print this decimal number with at least 3 space of space,
it will add spaces before the number if the number's length is less than the length it required (in this situation the length is '3')
*/