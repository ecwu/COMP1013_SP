#include <stdio.h>
int main(void){
	char str[51], pureStr[51];
	/* 
		a 51 integer array can save 50 characters 
		(a '\0' will add to the end of the string automatically, and it take 1 character)
	*/
	int index = 0, i = 0, pureI = 0, db[3];
	db[0] = 0;
	db[1] = 0;
	db[2] = 0;
	printf("please input a string (less than 50 characters), end with a space or line feed:\n");
	scanf("%[^\n]", str);
	// the name of the str array is also a pointer so we don't need a address sign"&"

	while (str[i] != '\0'){
		if (str[i] >= 65 && str[i] <= 90){// if the character is a uppercase letter
			db[0] += 1;
			pureStr[index] = str[i];
			index ++;
		}
		if (str[i] >= 97 && str[i] <= 122){// if the character is a lower case letter
			db[1] += 1;
			pureStr[index] = str[i];
			index ++;
		}
		if (str[i] >= 48 && str[i] <= 57){// if the character is a number
			db[2] += 1;
		}
		index++;
		i++;
	}

	printf("UC = %d LC = %d NUM = %d\n", db[0], db[1], db[2]);
	// output the result
	return 0;
}