# include <stdio.h>
# include "compareASCIICode.hpp" // include this hpp file using quotation mark
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