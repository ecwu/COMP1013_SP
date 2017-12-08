/*
	Zhenghao Wu l630003054
	
	- Write a function char* stringCopy(char *dest, char *res)to copy the string from res to dest
	- return the copied string
	- Requirement: The function strcpy is not allowed to use

	The main function is as follows:
	- int main(){
		  char str1[20], str2[20];
	  	  scanf("%s", str1);
		  stringCopy(str2, str1);
		  printf("%s\n", str2);
		  return 0;
	  }
*/

#include <stdio.h>
char* stringCopy(char *dest, char *res); // function prototype

int main(){
	char str1[20], str2[20];
	scanf("%s", str1);
	stringCopy(str2, str1); // function call
	printf("%s\n", str2);
	return 0;
}

char* stringCopy(char *dest, char *res){ // sub-function will return a pointer
	char *pA;
	char *pB; // declare two char pointer variable

	pA = dest; // the address of the first element in the variable dest goes to pA
	pB = res; // the address of the first element in the variable res goes to pB

	while(*pB != '\0'){ // while the copying element is not EOT
		*pA++ = *pB++; // copy the current element in res to dest at that index
	}

	*pA = '\0'; // add a EOT at the end of dest str
	return dest;// return the address of the first char in dest variable
}