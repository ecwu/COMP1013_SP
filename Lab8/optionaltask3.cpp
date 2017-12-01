/*
	Zhenghao Wu l630003054
	- reading a sequence of words (in one line)
	- call the sub‐function to sort the Word
	- print out the sorted words

	requirement: includes two functions: main function and sort function.
	Assume the length of the each word is less than 20
	there are no more than 20 words
	Library string functions can be used
*/
#include <stdio.h>
#include <string.h> // include string.h Library

void sort(char original[20][20], int length);

int main()
{
	char input[20][20], buffer[400], temp[20] = {'\0'};
	int index = 0, length = 0;
	puts("Please input a sequence of words");
	gets(buffer); // read the sequence of words

	for (int i = 0; i < strlen(buffer); i++) // find every word
	{
		int start = 0, end = 0, firstTime = 0;// assign varibale to store start and end of a word
		if (buffer[i] == ' ' || firstTime == 0)// if this is the first word or it is a space
		{
			start = i;// store the start index
			for (int j = start + 1; j <= strlen(buffer); j++)
			{
				if (buffer[j] == ' ' || buffer[j] == '\0')// find the end index(the space)
				{
					end = j;
					firstTime = 1;// set to 1 when the first word is saved
					break;// jump out of the loop
				}
			}
			strncpy(temp, buffer + start, end - start); // copy the word to a temp variable
			strcpy(input[index], temp); // copy the variable to the 2D-Array:input
			index++;
			i = end;
		}
	}

	length = index; // how many word = the length of the input array

	sort(input, length);// call the subfunction and sort the words
	for (int i = 0; i < length; i++)
	{
		printf("%s ", input[i]); // print out every word
	}
	printf("\n"); // end with a line feed
	return 0;
}

void sort(char original[20][20], int length)
{
	char temp[20];
	int index = 0;
	for (index = 0; index < length; index++) 
	{
		for (int point = index; point < length; point++)
		{
			if (strcmp(original[index], original[point + 1]) > 0) // using strcmp to compare two string
			{
				strcpy(temp, original[index]); // swap the two string using str copy
				strcpy(original[index], original[point + 1]);
				strcpy(original[point + 1], temp);
			}
		}
	}
}