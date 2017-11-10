/*
	Zhenghao Wu l630003054
	Write a program to read a sequence of positive integers and sort them in ascending order. Use -1 to indicate the end of numbers.
*/
#include <stdio.h>
int main(void){
	char sorting[50], str[50];
	int length = 0;
	for (int i = 0; i < 50 && str[i-1] != -1; i++){
		printf("please input the %d positive number: \n", i);
		scanf("%d", &str[i]);
	}
	printf("%s", str);
	return 0;
}