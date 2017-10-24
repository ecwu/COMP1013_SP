/*
	Author: Zhenghao Wu l630003054
	Input an integer and decide if it is an even number or an odd number
*/
#include <stdio.h>
int main(){
	int n;

	printf("Please input an integer\n");
	scanf("%d", &n);

	// print different message depend on remainder
	switch (n%2){
		case 0 ://if the remainder is 0
			printf("interger %d is an even number\n", n);
			break;
		case 1 ://if the remainder is 1
			printf("interger %d is an odd number\n", n);
			break;
	}
	return 0;
}