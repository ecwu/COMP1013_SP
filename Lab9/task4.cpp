#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	float score;
	char major[10];
} students;

void sort(students originalData[50], int order[50], int length);

int main(){
	students stuArray[50];
	int order[50], numberOfStudent = 0;
	int inputIndex = 0;

	for (int i = 0; i < 50; i++){
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
		numberOfStudent = i;
		puts("Type '1' to input next student's info, Type '0' to stop");
		scanf("%d", &temp);
		if(temp == 1){
			continue;
		}else if(temp == 0){
			break;
		}
	}

	sort(stuArray, order, numberOfStudent);
	
	printf("Name\tScore\tMajor\n");
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
				temp = order[i];
				order[i] = order[j+1];
				order[j+1] = temp;
			}
		}
	}
}