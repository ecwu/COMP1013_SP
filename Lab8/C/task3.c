/*
	Zhenghao Wu l630003054
	- reading a string
	- call stringLength to get the length of the string
	- print out the length of the string

	requirement: includes two functions: main function and stringLength.
	Assume the length of the string is less than 50.
	use .hpp and two .cpp
*/
# include <stdio.h>
# include "stringLength.hpp"

int main(){
	char input[50];

	puts("Please input a string:");
	scanf("%s", input);

	printf("%d\n", stringLength(input));
	return 0;
}
