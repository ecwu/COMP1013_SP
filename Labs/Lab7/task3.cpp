/*
	Zhenghao Wu l630003054
	Read a line of sentence which has only English letters and spaces.
	This sentence ends with the word "End".
	Count the number of words in this sentence.
	requirement: Use scanf to read strings.
*/
# include <stdio.h>
# include <string.h>

int endSignChecker(char currentInput[],char endSign[]);// declare for sub-function

int main () {
	char inputs[100] = "\0", EOL[4] = "End";
	int counter = 0;

	do{
		scanf("%s", &inputs); // read the input string(inside a do loop, excuted at least once)
		counter ++;// add one for each word
	//}while(strcmp(inputs,EOL)); another way: using string.h's function strcmp to compare two strings(return 0 if they are the same)
	}while(endSignChecker(inputs,EOL)); // go to the sub-function to check whether this two string are same, (not same will get 1 and continue the do while loop)

	printf("There is(are) %d word(s) in this sentence\n", counter);
	return 0;
}

int endSignChecker(char currentInput[],char endSign[]){
    int status = 0;// original status is 0 (consider they are not same)
    for(int i = 0; currentInput[i] != '\0' && endSign[i] != '\0'; i++){ // check two char at the same place
        if(currentInput[i] != endSign[i]){
            status = 1;// if they are not same set status to 1
            break;// jump out of the loop
        }
    }
    return status;
}