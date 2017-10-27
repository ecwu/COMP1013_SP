# include <stdio.h>
int main () {
	char englishLetter1, englishLetter2;
	int difference = 0;

	printf("Please give me an English letter: ");
	scanf("%c", &englishLetter1);

	if (englishLetter1 >= 97){
		englishLetter1 = englishLetter1 - 32;
	}

	printf("Please give me another English letter: ");
	scanf("%*c%c", &englishLetter2);
	if (englishLetter2 >= 97){
		englishLetter2 = englishLetter2 - 32;
	}

	difference = (englishLetter1 > englishLetter2) ? (englishLetter1 - englishLetter2) : (englishLetter2 - englishLetter1);

	printf("The difference between these two letters is %d\n", difference);
	return 0;
}