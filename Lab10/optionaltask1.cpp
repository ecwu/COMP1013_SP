/*
	Zhenghao Wu l630003054

	- Write a function 
	  - int occurrence# (char *sub, char *str)
	  	-  '#' is 1 or 2 to
    - find number of occurrences of sub in str.
		- eg, sub: "ab", str: "abc", return 1;
		- sub: "ab", str: "bac", return 0;
		- sub: "aba", str: "ababa", return 2;
	- The main function is as follows:

		int main(){
			char str1[20], str2[80];
			scanf("%s%s", str1, str2);
			printf("%d\n", occurrence1(str1, str2));
			printf("%d\n", occurrence2(str1, str2));
			return 0;
		}

	- occurrence1 is a recursive function, occurrence2 is not a recursive function.
*/

#include <stdio.h>
#include <string.h>

int occurrence1 (char *sub, char *str);
int occurrence2 (char *sub, char *str);// function prototype

int main(){
	char str1[20], str2[80];
	scanf("%s%s", str1, str2);
	printf("%d\n", occurrence1(str1, str2));// function call
	printf("%d\n", occurrence2(str1, str2));
	return 0;
}

int occurrence1 (char *sub, char *str){ // first way: recursive
	int indicator = 0;
	char cmp[1] = {'\0'};

	if(strcmp(str, cmp) == 0){ // base case
		return 0;
	}

	for (int i = 0; i < strlen(sub); i++){ // check next n char with str
		if (str[i] != sub[i]){
			indicator = 1;
			break;
		}
	}

	if(!indicator){
		return 1 + occurrence2 (sub, (&str[0])+1); // if match, start the recursion
	}else{
		return occurrence2 (sub, (&str[0])+1); // if not match
	}
}

int occurrence2 (char *sub, char *str){ // second way: no recursive
	int n = 0, indicator = 0, counter = 0;
	while (str[n] != '\0'){ // for every char index in the str
		for (int i = 0; i < strlen(sub); i++){ // check next n char with str
			if (str[n + i] != sub[i]){
				indicator = 1;
				break;
			}
		}
		if (!indicator){ // if match, add 1 to counter
			counter++;
		}
		indicator = 0; // reset the indicator
		n++; // move to next char
	}
	return counter;
}

