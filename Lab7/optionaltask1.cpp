/*
	Zhenghao Wu l630003054
	Read a line of sentence which has only English letters and spaces.
	This sentence ends with the word "End". Please inverse this sentence and then output. 
	(End not include)

	requirement: Use scanf
	the inverted sentence is stored as one string
*/
#include <stdio.h>
#include <string.h>

int charCounter(char inputs[]);// this sub-function use to count how many character(s) in the string
int endSignChecker(char currentInput[],char endSign[]);// this sub-function use to check whether the last word is "End" or not.

int main() {
	char sentence[100], inverseSentence[100], temp[100];
	char EOL[4] = "End", space[2] = " ";
	int length = 0, first = 0;
	//scanf("%[^\n]", sentence);
	puts("Please input a string end with a 'End': ");
	scanf("%s", temp);// read word by word

	while(endSignChecker(temp,EOL)){// when word is not "End"
		if (!first){
			strcpy(sentence,temp);// init the sentence string
			first = 1;
		}else{
			strcat(sentence,temp);// link the follow string to the sentence string
		}
		strcat(sentence,space);// link a space after the string
		scanf("%s", temp);
	}

	length = charCounter(sentence) - 1;// ignore the "\0" char
	sentence[length + 1] = '\0';// replace the last space to a "\0" char
	for (int i = 0; i < length; i++) {
		inverseSentence[length - i - 1] = sentence[i]; // reverse the string
	}

	inverseSentence[length] = '\0';// End the new string with a "\0" char
	printf("%s\n", inverseSentence); // print the inversed string
	return 0;
}

int charCounter(char inputs[]) {// count char number
	int i = 0;
	char endSign[1] = { '\0' };
	while (inputs[i] != endSign[0]) {
		i++;
	}
	return i;
}

int endSignChecker(char currentInput[],char endSign[]){
    int status = 0;
    for(int i = 0; currentInput[i] != '\0' && endSign[i] != '\0'; i++){ 
        if(currentInput[i] != endSign[i]){// is the last word is "End"
            status = 1;
            break;
        }
    }
    return status;
}