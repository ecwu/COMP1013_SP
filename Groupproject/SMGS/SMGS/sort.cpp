#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relay.h"


int sort() {
	struct stu studentList[20];
	struct stuNMarks studentMarks[20];
	struct stuNSum studentSum[20];
	struct marksNPointer studentMarksLinkedList;
	int assignmentStatus[5] = { 0,0,0,0,0 };
	int stuNumber = 0;
	
	loadStudentList(studentList, &stuNumber);
	if (loadStudentMarksforInquiry(studentMarks, &assignmentStatus[0], stuNumber) == -1) {
		return -1;
	}

	bubbleSort(studentMarks, stuNumber);
	marksToSum(studentMarks, studentSum, stuNumber);
	writeStudentSum(studentSum, stuNumber);

	return 0;
}


int bubbleSort(struct stuNMarks *studentMarks, int stuNumber) {
	char studentNameTemp[10];
	int studentIDTemp = 0;
	float studentMarksSumi = 0.0, studentMarksSumj = 0.0;
	float studentAssignment1 = 0.0, studentAssignment2 = 0.0, studentAssignment3 = 0.0, studentAssignment4 = 0.0, studentAssignment5 = 0.0;

	for (int i = 0; i < stuNumber; i++) {
		studentMarksSumi = studentMarks[i].assignment1 + studentMarks[i].assignment2 + studentMarks[i].assignment3 + studentMarks[i].assignment4 + studentMarks[i].assignment5;
		for (int j = i; j < stuNumber; j++) {
			studentMarksSumj = studentMarks[j].assignment1 + studentMarks[j].assignment2 + studentMarks[j].assignment3 + studentMarks[j].assignment4 + studentMarks[j].assignment5;
			if (studentMarksSumi < studentMarksSumj) {
				strcpy(studentNameTemp, studentMarks[j].name);
				studentIDTemp = studentMarks[j].studentID;
				studentAssignment1 = studentMarks[j].assignment1;
				studentAssignment2 = studentMarks[j].assignment2;
				studentAssignment3 = studentMarks[j].assignment3;
				studentAssignment4 = studentMarks[j].assignment4;
				studentAssignment5 = studentMarks[j].assignment5;
				strcpy(studentMarks[j].name, studentMarks[i].name);
				studentMarks[j].studentID = studentMarks[i].studentID;
				studentMarks[j].assignment1 = studentMarks[i].assignment1;
				studentMarks[j].assignment2 = studentMarks[i].assignment2;
				studentMarks[j].assignment3 = studentMarks[i].assignment3;
				studentMarks[j].assignment4 = studentMarks[i].assignment4;
				studentMarks[j].assignment5 = studentMarks[i].assignment5;
				strcpy(studentMarks[i].name, studentNameTemp);
				studentMarks[i].studentID = studentIDTemp;
				studentMarks[i].assignment1 = studentAssignment1;
				studentMarks[i].assignment2 = studentAssignment2;
				studentMarks[i].assignment3 = studentAssignment3;
				studentMarks[i].assignment4 = studentAssignment4;
				studentMarks[i].assignment5 = studentAssignment5;
			}
		}
	}

	return 0;
}

int marksToSum(struct stuNMarks *studentMarks, struct stuNSum *studentSum, int stuNumber) {
	for (int i = 0; i < stuNumber; i++) {
		strcpy(studentSum[i].name, studentMarks[i].name);
		studentSum[i].studentID = studentMarks[i].studentID;
		studentSum[i].sum = studentMarks[i].assignment1 + studentMarks[i].assignment2 + studentMarks[i].assignment3 + studentMarks[i].assignment4 + studentMarks[i].assignment5;
	}
	return 0;
}

int writeStudentSum(struct stuNSum *studentSum, int stuNumber) {
	FILE *sortedp;

	sortedp = fopen("sorted.txt", "w");
	if (sortedp == NULL) {
		puts("Fatal Error: Unable to write student total marks list.");
		return -1;
	}

	fprintf(sortedp, "Name      ID    Total  \n");

	for (int i = 0; i < stuNumber; i++) {
		fprintf(sortedp, "%-10s%-6d%-7.2f\n", studentSum[i].name, studentSum[i].studentID, studentSum[i].sum);
	}

	printf("Output the data successful.\n");
	fclose(sortedp);
	return 0;
}