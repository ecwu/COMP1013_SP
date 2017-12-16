/*
	Author: Zhenghao Wu l630003054

	- to randomly generate a string (English letters in lower case)
	- length given by the user
	- Hints: use rand() function
	- String representation cannot use array
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int generateASCII = 0, length = 0;

	puts("Input how many English letters you want to generate?");
	scanf("%d", &length); // ask user to input how many letters the user want to generate

	char* randomStr = (char*)malloc((length + 1) * sizeof(char)); // allocate memory base on users input
	if (randomStr){ // if the memory allocated
		for(int i = 0; i < length; i++){ 
			randomStr[i] = 97 + rand() % 26; // generate a ascii code for lowercase letter(97 - 123)
		}
	}
	randomStr[length] = '\0';// add a '\0' at the end of the str

	printf("%s\n", randomStr); //output
	
	free(randomStr); // free the memory

	return 0;
}