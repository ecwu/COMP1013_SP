/*
	Author: Zhenghao Wu l630003054

	put the answers to the questions as the comments in this program.

	1. What is this program supposed to do?
	2. Is the memory dynamically allocated or statically allocated
	3. What is %*c used for?
	4. If %-10s is changed to %10s, what happened?
	5. Why do we need to add free(p)?
*/

#include <stdio.h>
#include <stdlib.h>
struct stuRec{
	char name[20];
	int id;
	char gender;
};
int main(){
	struct stuRec *p;
	p = (struct stuRec*)malloc(sizeof(struct stuRec));
		if (p){
			printf("please input name, id and gender\n");
			scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
			printf("name:%-10s,ID:%d,gender:%c\n", p->name,p->id,p->gender);
			free (p);
		}
	return 0;
}

/*
	Ans:
	
	1. What is this program supposed to do?
		This program will allocate a memory for the stuRec struct pointer p dynamically
		and read name, id, and gender data inputed by user and save to the p
		output the information stored in the pointer p and free the memory space

	2. Is the memory dynamically allocated or statically allocated
		the memory is allocated dynamically

	3. What is %*c used for?
		%*c is used for ignore a char, user use space to distinguish different data
		if %*c didn't used, gender data will be ' '(0x20)

	4. If %-10s is changed to %10s, what happened?
		"-" means left align. if change it to %10s, it means right align
		there will be some space before the contents if the contents's letter is less than 10

	5. Why do we need to add free(p)?
		To avoid Memory Leak
		free the memory for other program to use

*/