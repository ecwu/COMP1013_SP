/*
	Zhenghao Wu l630003054
	
	-read students' information and sort according to the names..
	- each student has the following information
		- name
		- score
		- major
	- The total number of students will not exceed 50
*/
#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	float score;
	char major[10];
} students;
// struct Variable Declarations

void sort(students originalData[50], int order[50], int length); // function prototype

int main(){
	students stuArray[50];
	int order[50], numberOfStudent = 0;
	int inputIndex = 0;

	for (int i = 0; i < 50; i++){ // read the students' information one by one
		int temp;
		if(inputIndex == 0){
			printf("Please input No.%d student's Name\n", i + 1);
			scanf("%s", &stuArray[i].name);
			inputIndex = 1;
		}
		if(inputIndex == 1){
			printf("Please input No.%d student's Score\n", i + 1);
			scanf("%f", &stuArray[i].score);
			inputIndex = 2;
		}
		if(inputIndex == 2){
			printf("Please input No.%d student's Major\n", i + 1);
			scanf("%s", &stuArray[i].major);
			inputIndex = 0;
		}
		order[i] = i;
		numberOfStudent = i; // record how many students' info has been inputed
		puts("Type '1' to input next student's info, Type '0' to stop");
		// ask user to continue or pause and sort
		scanf("%d", &temp); 
		if(temp == 1){
			continue;
		}else if(temp == 0){
			break;
		}
	}

	sort(stuArray, order, numberOfStudent); // function call

	printf("Name\tScore\tMajor\n"); // output the function one by one according to order index
	for (int i = 0; i <= numberOfStudent; i++){
		printf("%s\t%g\t%s\n", stuArray[order[i]].name, stuArray[order[i]].score, stuArray[order[i]].major);
	}

	return 0;
}

void sort(students originalData[50], int order[50], int length){
	int temp = 0;
	for(int i = 0; i <= length; i++){
		for (int j = i; j < length; j++){
			if(strcmp(originalData[order[i]].name, originalData[order[j+1]].name) > 0){ 
			// sort according to the originalData but only modify the order index
			// won't modift originalData
				temp = order[i];
				order[i] = order[j+1];
				order[j+1] = temp;
			}
		}
	}
}