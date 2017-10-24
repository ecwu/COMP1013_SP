/*
	Author: Zhenghao Wu l630003054
	Read one character and decide if it is a digit, an English letter or others. Give the corresponding display message.
*/
#include <stdio.h>
int main(){
	char n;
	int ascii;
	printf("Please input an character\n");
	scanf("%c", &n);// read a character
	ascii = n;// save the ASCII code to the variable `ascii`

	//Determines the type of character according to the ASCII code
	if ((n >= 0 && n <= 31) || n == 127){
		printf("Character %c (ASCII:%d) is a Control character\n", n, ascii);
	}else if ((n >= 32 && n <= 47) || (n >= 58 && n <= 64) || (n >= 91 && n <= 96) || (n >= 123 && n <= 126)){
		printf("Character %c (ASCII:%d) is a Punctuation character\n", n, ascii);
	}else if (n >= 48 && n <= 57){
		printf("Character %c (ASCII:%d) is a Numeric digit\n", n, ascii);
	}else if (n >= 65 && n <= 90){
		printf("Character %c (ASCII:%d) is a Uppercase English letter\n", n, ascii);
	}else if (n >= 97 && n <= 122){
		printf("Character %c (ASCII:%d) is a Lower case English letter\n", n, ascii);
	}else{
		printf("Invalid Input\n");//Print a error if the input is not a character
	}

	return 0;
}

/*
According to ASCII (1977/1986) Table from: https://en.wikipedia.org/wiki/ASCII

0~31 || 127 : Control character
32~47 || 58~64 || 91~96 || 123~126 : Punctuation
48~57 : Numeric digit
65~90 : Uppercase letter
97~122 : Lower case letters
*/