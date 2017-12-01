#include <stdio.h>
int main(){
	int i = 0, j = 5;
	char ch;
	// float f;

	scanf("%c", &ch);
	printf("the ASCII code of '%c' is %d\n", ch, ch);

	printf("the value of i is %d\n", i);
	i = ch;
	printf("the value of i is %d\n", i);
	return 0;
}

/*

Q1.
1. Missing 'int' for main function
2. All single quotes and double quotes are chinese punctuation character
3. Missing semicolon at the end of a statement
4. Missing addressing character for variable ch
5. Missing Head File stdio.h
6. Missing 'return 0;'

--------------------

Q2.
Warning1: 'f' is an unreferenced local variable
Warning2: 'i' is an uninitialized local varibale

--------------------

Q3.
As shown above

*/