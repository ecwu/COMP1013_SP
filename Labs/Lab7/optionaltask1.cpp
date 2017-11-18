/*
	Zhenghao Wu l630003054
	Read a line of sentence which has only English letters and spaces.
	This sentence ends with the word "End". Please inverse this sentence and then output. 
	(End not include)

	requirement: Use scanf
*/
#include <stdio.h>
#include <string.h>

int charCounter(char inputs[]);
int endSignChecker(char currentInput[],char endSign[]);

int main() {
	char sentence[100], inverseSentence[100], temp[100];
	char EOL[4] = "End", space[2] = " ";
	int length = 0, first = 0;
	//scanf("%[^\n]", sentence);

	scanf("%s", temp);

	while(endSignChecker(temp,EOL)){
		if (!first){
			strcpy(sentence,temp);
			first = 1;
		}else{
			strcat(sentence,temp);
		}
		strcat(sentence,space);
		scanf("%s", temp);
	}

	length = charCounter(sentence) - 1;
	sentence[length + 1] = '\0';
	for (int i = 0; i < length; i++) {
		inverseSentence[length - i - 1] = sentence[i];
	}

	inverseSentence[length] = '\0';
	printf("%s\n", inverseSentence);
	return 0;
}

int charCounter(char inputs[]) {
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
        if(currentInput[i] != endSign[i]){
            status = 1;
            break;
        }
    }
    return status;
}