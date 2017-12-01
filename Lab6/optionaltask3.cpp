/*
	Zhenghao Wu l630003054
	read a string Calculate the number of upper cases, number of lower cases and number of spaces.
	Then output the string with only English letters and spaces left.

	requirement: Use scanf("%s", …)
*/
#include <stdio.h>
int main(void){
	char str[51], pureStr[51] = {"\0"};// declare the char array and initialize "pureStr" to NULL
	int index = 0, i = 0, db[3] = {0,0,0};

	printf("please input a string (less than 50 characters), end with a line feed:\n");
	scanf("%[^\n]", str);// %[^\n]: read a string until meet '\n'(line feed)

	while (str[i] != '\0'){
		if (str[i] >= 65 && str[i] <= 90){// if the character is a uppercase letter
			db[0] += 1;
			pureStr[index] = (char)str[i];//write the current char to the pureStr array
			index ++;
		}
		if (str[i] >= 97 && str[i] <= 122){// if the character is a lower case letter
			db[1] += 1;
			pureStr[index] = (char)str[i];//write the current char to the pureStr array
			index ++;
		}
		if (str[i] == 32){// if the character is a space
			db[2] += 1;
			pureStr[index] = (char)str[i];//write the current char to the pureStr array
			index ++;
		}
		i++;
	}
	pureStr[index] = '\0';// add a NUL terminator at the end of pureStr array

	printf("upper case(s) = %d lower case(s) = %d space(s) = %d\n", db[0], db[1], db[2]);
	printf("%s\n", pureStr);
	// output the result
	return 0;
}