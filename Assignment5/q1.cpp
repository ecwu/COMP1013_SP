/*
	Author: Zhenghao Wu l630003054
	- Input a sequence of data and save it in the array
	- set up a pointer to point to the first data of the array
	- output the data in array one by one by moving the pointer
	- output the address of each data in array
	- there are no more than 20 data items.
    - You can choose what type of data is to be processed
*/

# include <stdio.h>

int main (){
	char sequence[21];
	char *p; // define the pointer

	puts("Please input a sequence of character (total number >= 20)");
	scanf("%[^\n]", sequence);

	p = sequence; // point to the beginning of the array

	for(int i = 0; *(p+i) != '\0'; i++){
		printf("%c\t%x\n", *(p+i), (p+i)); // print out every element(s) in the array
	}
	return 0;
}