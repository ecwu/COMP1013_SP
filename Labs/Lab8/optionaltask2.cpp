/*
	Zhenghao Wu l630003054
	- reading a sequence of integers
	- call the sub‐function to sort the numbers
	- print out the sorted numbers

	requirement: includes two functions: main function and sort function.
	Assume the number of inputted numbers is less than 50 and the integers
	sorted in descending order.
*/
# include <stdio.h>
void sort(int original[], int length);

int main(void){
	int number[50], length = 0, i = 0;
	puts("Please input a sequence of integers, end with '-1'");
	do{
		int buffer = 0;
		scanf("%d", &buffer);
		// input data save to the buffer first
		if (buffer == -1){
			// check whether the input number is '-1' or not.
			break;// jump out of the loop when input is '-1'
		}
		number[i] = buffer;//write the buffer number to the number array
		i++;
		length ++;
	}
	while(i < 50);

	sort(number, length);

	for (int i = 0; i <length; i++){
		printf("%d ", number[i]);
		// print out the sorted array 
	}
	printf("\n");
	return 0;
}

void sort(int original[], int length){
	int  temp = 0, a, b, i = 0;
	for (a = 0; a < length - 1; a++){
		for (b = 0; b < length - a - 1; b++){
			if (original[b] < original[b+1]){ //descending order
				temp = original[b];
				original[b] = original[b+1];
				original[b+1] = temp;
				// move the smallest number to the end of the array
			}
		}
	}// modify the array, no return value
}