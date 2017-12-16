/*
	Author: Zhenghao Wu l630003054
	- Write a program which includes two functions
	- The main function reads the sequence of integers
	  - (assume ends with -1)
    - sub-function will find the biggest integer and lowest integer
    - The main function will
      - call the sub-function
      - pass the integers to it through parameters
      - print the biggest integer and lowest integer.
*/

# include <stdio.h>

int bigNSmall(int *input, int *big, int *low, int index); // function prototype

int main () {
	int number[50];
	int biggest = 0, lowest = 0;
	int temp = 0, i = 0;

	puts("Please input a sequence of integer end with '-1'");
	scanf("%d", &temp);
	while(temp != -1){ // read a sequence of integers
		number[i] = temp;
		i++;
		scanf("%d", &temp);
	}

	bigNSmall(number, &biggest, &lowest, i); // function call

	printf("Biggest integer:%d\tLowest integer:%d\n", biggest, lowest);
	// print out the result
	return 0;
}

int bigNSmall(int *input, int *big, int *low, int length){
	int biggest = 0, lowest = 0;

	biggest = input[0];
	lowest = input[0]; // init this two variable to a integer inside the array

	for(int i = 0; i < length; i++){
		if (input[i] > biggest){
			biggest = input[i];
		}else if(input[i] < lowest){
			lowest = input[i];
		}
	}

	// find out the biggest and lowest variable in the array

	*big = biggest;
	*low = lowest; // send the variable back trought pointer

	return 0;
}
