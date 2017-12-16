/*
	Author: Zhenghao Wu l630003054
	Write a program to read students’ names and scores and save them in a file student.txt.
Then sort them according to scores in descending order and save the sorted data in another
file sorted.txt. Assume that there are no more than 20 students. The program must
satisfy the following requirements.
a. The program should contain two functions: main, sort.
b. The main function reads data from file，call the sort function, pass data to it for
sorting and save the sorted results into another file.
c. The sort function will sort the scores only. It is called by the main function.
For example, if in the file student.txt, the information is
 Judy 10
 Tony 100
 John 30
In the file sorted.txt, the information is
 Tony 100
 John 30
 Judy 10
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