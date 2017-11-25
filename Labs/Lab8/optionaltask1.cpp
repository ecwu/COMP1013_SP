/*
	Zhenghao Wu l630003054
	- reading two strings
	- call stringCompare to get the comparison result
	- print out the comparison result

	requirement: includes two functions: main function and stringCompare.
	Assume the length of the string is less than 50.
*/
# include <stdio.h>

int stringCompare(char s1[], char str2[]); // function prototype

int main(){
	char input1[50], input2[50];

	puts("Please input the first string:");
	scanf("%s", input1);
	puts("Please input the second string:");
	scanf("%s", input2);

	printf("%d\n", stringCompare(input1, input2)); // function call
}

int stringCompare(char s1[], char str2[]){
	int i = 0;
	while(s1[i] != '\0' && str2[i] != '\0'){ // when two string have same length
		if(s1[i] != str2[i]){
			return (s1[i] > str2[i])? 1 : -1;
		}
		if(s1[i] == '\0' || str2[i] == '\0'){ // if two string's length are not the same
			return (s1[i] > str2[i])? 1 : -1;
		}
		i++;
	}
	return 0; // the two string are the same
}