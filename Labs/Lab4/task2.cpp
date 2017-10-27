# include <stdio.h>
int main () {
	int height = 0;
	float weight;

	printf("Please input your height (cm): ");
	scanf("%d", &height);

	printf("Please input your weight (Kg): ");
	scanf("%f", &weight);

	if ((height - 105) > (weight + 20)){
		printf("You are too slim\n");
	}else if ((weight - 10) < (height - 105) && (height - 105) <= (weight + 20)){
		printf("You are fit\n");
	}else {
		printf("You are too fat\n");
	}
	return 0;
}