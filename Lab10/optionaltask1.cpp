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
int occurrence1 (char *sub, char *str);
int occurrence2 (char *sub, char *str);

int main(){
	char str1[20], str2[80];
	scanf("%s%s", str1, str2);
	printf("%d\n", occurrence1(str1, str2));
	printf("%d\n", occurrence2(str1, str2));
	return 0;
}

int occurrence1 (char *sub, char *str){
	int n = 0;
	while (str[n] != '\0'){
		
	}
}
int occurrence2 (char *sub, char *str){

}
