/*
	Zhenghao Wu l630003054
	Write a program to read a sequence of positive integers and sort them in *descending* order. Use -1 to indicate the end of numbers.
	requirement:
	1. two functions: main funtion and a sub-function 
	2. sub-function name: compareASCIICode
*/
# include <stdio.h>
int compareASCIICode(char, char);// declare for sub-function

int main(void) {// main function body
	char char1, char2;
	puts("please input two ASCII code");// using puts to print out the message
	scanf("%c%c", &char1, &char2);
	switch(compareASCIICode(char1, char2)){// print info base on return value
		case -1:
			printf("'%c' is smaller than '%c'\n", char1, char2);
			break;
		case 0:
			printf("'%c' is equal to '%c'\n", char1, char2);
			break;
		case 1:
			printf("'%c' is greater than '%c'\n", char1, char2);
			break;
		default:
			puts("Invalid Inputs");
	}
	return 0;
}

int compareASCIICode(char char1, char char2){// Sub-Function definition, return value is a integer
	if (char1 > char2){// return different value base on the two ASCII code
		return 1;
	}else if (char1 < char2){
		return -1;
	}else if (char1 = char2){
		return 0;
	}else {
		return 2;// if two inputs can't compare, return a error code
	}
}