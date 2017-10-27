# include <stdio.h>
int main () {
	char grade;

	printf("Please input your GPA Grade: ");
	scanf("%c", &grade);

	switch (grade) {
		case 65:
		case 97:
			printf("Your GPA point is %.2f\n", 4.00);
			break;
		case 66:
		case 98:
			printf("Your GPA point is %.2f\n", 3.00);
			break;
		case 67:
		case 99:
			printf("Your GPA point is %.2f\n", 2.00);
			break;
		case 68:
		case 100:
			printf("Your GPA point is %.2f\n", 1.00);
			break;
		case 70:
		case 102:
			printf("Your GPA point is %.2f\n", 0.00);
			break;
		default:
			printf("Invalid Grade\n");
	}
	return 0;
}