/*
	Author: Zhenghao Wu l630003054
	- Write a program to read students’ names and scores
	- and save them in a file student.txt

	- Then sort them according to scores in descending order
	- and save the sorted data in another file sorted.txt
	- Assume that there are no more than 20 students

	The program must satisfy the following requirements
	  a. The program should contain two functions: main, sort.
	  b. The main function 
	      reads data from file
	      call the sort function
	      pass data to it for sorting
	      save the sorted results into another file.
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
# include <string.h>

struct student{
	char name[10];
	int score;
};

int sort(struct student *stu, int index); // 

int main(){
	FILE *fp;
	struct student stu[20];
	int indicator = 0, i = 0;

	while (indicator == 0){
		printf("please input name and score of the NO. %d student\n", i+1);
		scanf("%s%d", stu[i].name, &stu[i].score);
		puts("Input '0' to start next student, Input '-1' to stop");
		scanf("%d", &indicator);
		i++;
	}

	fp = fopen("student.txt", "w");

	if(!fp){
		puts("Unable to open/new the file");
		return -1;
	}
	for (int j = 0; j < i; j++){
		fprintf(fp, "%s %d\n", stu[j].name, stu[j].score);
	}
	fclose(fp);
	puts("Output the student list successfully!");

	sort(stu, i);

	return 0;
}


int sort(struct student *stu, int index){
	FILE *fp2;
	struct student temp;

	for (int i = 0; i < index; i++){
		for (int j = i; j < index; j++){
			if (stu[i].score < stu[j].score){
				strcpy(temp.name, stu[j].name);
				temp.score = stu[j].score;
				strcpy(stu[j].name, stu[i].name);
				stu[j].score = stu[i].score;
				strcpy(stu[i].name, temp.name);
				stu[i].score = temp.score;
			} 
		}
	}
	
	fp2 = fopen("sorted.txt", "w");

	if(!fp2){
		puts("Unable to open/new the file");
		return -1;
	}
	for (int j = 0; j < index; j++){
		fprintf(fp2, "%s %d\n", stu[j].name, stu[j].score);
	}
	fclose(fp2);
	puts("Output the sorted student list successfully!");
}