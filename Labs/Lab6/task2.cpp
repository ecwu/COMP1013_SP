/*
	Zhenghao Wu l630003054
	Read a string, and count the number of characters in that string
	(Assume that total number of characters will not exceed 50)
	extra requirement: using ¡°%s¡± in a scanf statement
*/
#include <stdio.h>
int main(void){
	char str[51];
	int counter = 0, i = 0;

	printf("please input a string (less than 50 characters), end with a space or line feed:\n");
	scanf("%s", str);

	while (str[i] != '\0'){
		counter++;
		i++;
	}

	printf("total characters in the string = %d\n", counter);
	return 0;
}