#include<stdio.h>
int main(){
	printf("Number of bytes used to store a char type variable is %d\n", sizeof(char));
	printf("Number of bytes used to store a short int type variable is %d\n", sizeof(short));
	printf("Number of bytes used to store an int type variable is %d\n", sizeof(int));
	printf("Number of bytes used to store a long int type variable is %d\n", sizeof(long));
	printf("Number of bytes used to store a float type variable is %d\n", sizeof(float));
	printf("Number of bytes used to store a double type variable is %d\n", sizeof(double));
	return 0;
}