/*
	Author: Zhenghao Wu l630003054
	- Read a line of sentence of English words
	- change the first letter of each word to upper case
	- output the changed sentence

	Assume that the number of characters in the sentence is less than 100
	The program includes a function which does the case change for a sentence.
*/

# include <stdio.h>
void caseUpper(char input[]); // function prototype

int main (){
	char sentence[100];

	puts("Please input a sentence of English words:");
	scanf("%[^\n]", sentence); // read a sequence of words until meet line feed

	caseUpper(sentence); // function call

	printf("%s\n", sentence);
	return 0;
}

void caseUpper(char input[]){
	int i = 0;
	if (input[0] >= 97 && input[0] <= 122 ){ // if the first letter is a lower case letter
		input[0] -= 32; // upper it
	}
	while(input[i] != '\0'){ // loop until the end of the sentence
		if(input[i] == ' '){ // if it is a space
			if(input[i+1] >= 97 && input[i+1] <= 122){ // find the next word's first letter
				input[i+1] -= 32; // upper it
			}
		}
		i++; // index increse
	}
}