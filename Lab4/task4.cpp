/*
	Zhenghao Wu l630003054
	calculate sum of the odd numbers from 1 to 100. 
*/
# include <stdio.h>
int main () {
	int ans = 1, aim = 100, sum = 0;
	//init ans as the first number 1
	//init ans to the largest number 100

	while (ans < aim){ 
		sum += ans;
		ans += 2;
		//step of ans is 2(add 2 to itself every time)
	}
	printf("sum of the odd numbers from 1 to 100 is %d\n", sum);
	return 0;
}