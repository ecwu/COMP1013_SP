/*
	Zhenghao Wu l630003054
	ask user to input two English Letters, and input the length between two letters(Not case sensitive)
*/
# include <stdio.h>
int main () {
	char englishLetter1, englishLetter2;
	int difference = 0;

	printf("Please give me an English letter: ");
	scanf("%c", &englishLetter1);// read the first letter
	if (!((englishLetter1 >= 65 && englishLetter1 <= 90) || (englishLetter1 >= 97 && englishLetter1 <= 122))){
		printf("Invalid Input");
		return -1;
	}else if (englishLetter1 >= 97){// if the letter is the lower case letter, convert it into uppercase letter by minus 32 to it's ASCII code
		englishLetter1 = englishLetter1 - 32;
	}

	printf("Please give me another English letter: ");
	scanf("%*c%c", &englishLetter2);// read the second letter
	if (!((englishLetter2 >= 65 && englishLetter2 <= 90) || (englishLetter2 >= 97 && englishLetter2 <= 122))){
		printf("Invalid Input");
		return -1;
	}else if (englishLetter2 >= 97){// if the letter is the lower case letter, convert it into uppercase letter by minus 32 to it's ASCII code
		englishLetter2 = englishLetter2 - 32;
	}

	difference = (englishLetter1 > englishLetter2) ? (englishLetter1 - englishLetter2) : (englishLetter2 - englishLetter1);
	// using ?: expression, so that the output value is always positive.
	printf("The difference between these two letters is %d\n", difference);
	return 0;
}