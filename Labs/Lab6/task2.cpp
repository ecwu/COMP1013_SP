/*
	Zhenghao Wu l630003054
	Read a string, and count the number of characters in that string
	(Assume that total number of characters will not exceed 50)
	extra requirement: using ¡°%s¡± in a scanf statement
*/
#include <stdio.h>
int main(void){
	char str[51];
	/* 
		a 51 integer array can save 50 characters 
		(a '\0' will add to the end of the string automatically, and it take 1 character)
	*/
	int counter = 0, i = 0;

	printf("please input a string (less than 50 characters), end with a space or line feed:\n");
	scanf("%s", str);
	// the name of the str array is also a pointer so we don't need a address sign "&"

	while (str[i] != '\0'){
		//count the total characters number of the string until meet the end of the string ("\0")
		counter++;
		i++;
	}

	printf("total characters in the string = %d\n", counter);
	// output the result
	return 0;
}