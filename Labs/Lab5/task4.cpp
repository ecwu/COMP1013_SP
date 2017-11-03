/*
	Zhenghao Wu l630003054
	read one sentence and output the number of the character ¡®a¡¯ in the sentence. 
*/
#include <stdio.h>
int main () {
	int ans = 0;
	char input;
	printf("please input a sentence:");
	scanf("%c", &input); // read user's input
	for (; input != 10; scanf("%c", &input)){//if the input isn't a "\n", do the statement below then read next char in the buffer
		if (input == 97){// if the char is the lower case "a"(in ASCII)
			ans ++;//add one to the ans variable
		}
	}
	printf("the number of the character 'a' in the sentence: %d\n", ans);
	return 0;
}