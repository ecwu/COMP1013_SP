# include <stdio.h>
int main () {
	int aim = 0;
	float us;

	printf("Please input a U.S. Dollars value: ");
	scanf("%f", &us);

	printf("What currency you want to convert to?\nInput '0' to convert to Euro\nInput '1' to convert to RMB\n");
	scanf("%d", &aim);

	if(aim){
		printf("The amount of U.S. Dollars in RMB are %.2f\n", us * 6.5);
	}else {
		printf("The amount of U.S. Dollars in Euro are %.2f\n", us * 0.9);
	}
	return 0;
}