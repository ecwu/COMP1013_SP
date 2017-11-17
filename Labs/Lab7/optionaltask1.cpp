#include<stdio.h>

int charCounter(char inputs[]);

int main (){
	char sentence[100], inverseSentence[100] = {'\0'};
	int length = 0;
	scanf("%[^\n]", sentence);
	length = charCounter(sentence);
	for (int i = 0; i <= length; i++){
		inverseSentence[length - i - 1] = sentence[i];
	}
	inverseSentence[length] = '\0';
	printf("%d\n", inverseSentence);
	return 0;
}

int charCounter(char inputs[]){
	int i = 0;
	char endSign[1] = {'\0'};
	while(inputs[i] != endSign[0]){
		i++;
	}
	return i;
}