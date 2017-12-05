/*
	Author: Zhenghao Wu l630003054
	- read a sequence of integers in an array a
	  - (assume that the total number of integers is less than 20)
	- inverse the numbers in the array a.

	For example:
	input are 10, 20, 30, 40. 
	output is 40, 30, 20, 10.

	- Requirements
	  - The main function will be responsible for inputting and outputting integers.
	  - The sub-function inverse will be responsible for inversing the integers in an array.
*/
# include <stdio.h>

void inverse(int src[], int number); // function prototype

int main(){
	int sequence[20];
	int index = 0, buffer = 0;

	puts("Please input a sequence of integers divided by space and end with a -1");

	scanf("%d", &buffer); // read the input number and save to buffer

	while(buffer != -1 || index >= 21){ // read the rest of the sequence until meet -1
		sequence[index] = buffer;
		index++;
		scanf("%d", &buffer);
	}

	inverse(sequence, index); // function call

	for (int i = 0; i < index; i++){
		printf("%d ", sequence[i]); // print out each element in the inversed sequence
	}
	printf("\n");

	return 0;
}

void inverse(int src[], int number){
	int temp = 0;
	for (int i = 0; i < number / 2; i++){ // put the front element to the end of the array
		temp = src[i];
		src[i] = src[number-i-1];
		src[number-i-1] = temp;
	}
}