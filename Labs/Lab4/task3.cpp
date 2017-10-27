/*
	Zhenghao Wu l630003054
	transfer student¡¯s GPA grade to GPA point.

	requirement: Switch statement

	A & a: 4.0
	B & b: 3.0
	C & c: 2.0
	D & d: 1.0
	F & f: 0.0
*/
# include <stdio.h>
int main () {
	char grade;

	printf("Please input your GPA Grade: ");
	scanf("%c", &grade);// read user's input(GPA)

	/*
	a char type variable corresponded with a ASCII code
	We can output the correct information with switch statement and it's ascii code
	One uppercase letter and lower case letter using one same print statement
	*/
	switch (grade) {
		case 65:
		case 97:// if the grade is A or a
			printf("Your GPA point is %.2f\n", 4.00);
			break;
		case 66:
		case 98:// if the grade is B or b
			printf("Your GPA point is %.2f\n", 3.00);
			break;
		case 67:
		case 99:// if the grade is C or c
			printf("Your GPA point is %.2f\n", 2.00);
			break;
		case 68:
		case 100:// if the grade is D or d
			printf("Your GPA point is %.2f\n", 1.00);
			break;
		case 70:
		case 102://// if the grade is F or f
			printf("Your GPA point is %.2f\n", 0.00);
			break;
		default:
			printf("Invalid Grade\n");//if the input character is not a GPA grade, print the error information 
	}
	return 0;
}