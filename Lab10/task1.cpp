/*
	Zhenghao Wu l630003054

	- Modify the following program so that values of a and b can be exchanged

	- Original Program:
	#include <stdio.h>
	
	void exchange(int x, int y);
	int main(){
		int a = 10, b = 20;
		printf("before exchange: a = %d\n, b = %d\n", a, b);
		exchange(a, b);
		printf("after exchange: a = %d, b = %d\n", a, b);
		return 0;
	}
	void exchange(int x, int y){
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
*/
#include <stdio.h>
void exchange(int *x, int *y); // function prototype with two pointer parameter

int main(){
	int a = 10, b = 20;
	printf("before exchange: a = %d, b = %d\n", a, b);
	exchange(&a, &b); // function call; sent two variable's address
	printf("after exchange: a = %d, b = %d\n", a, b);
	return 0;
}
void exchange(int *x, int *y){
	int temp;
	temp = *x; // modify the original variable
	*x = *y;
	*y = temp;
}