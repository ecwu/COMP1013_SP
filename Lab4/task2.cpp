/*
	Zhenghao Wu l630003054
	Read height (in cm) and weight (in Kilo) and tell the user about their body condition
	
	height - 105 > weight + 20 : You are too slim
	weight - 10 < height - 105 <= weight + 20 : You are fit
	weight - 10 > height - 105 : You are too fat
*/
# include <stdio.h>
int main () {
	float height, weight;

	printf("Please input your height (cm): ");
	scanf("%f", &height);

	printf("Please input your weight (Kg): ");
	scanf("%f", &weight);
	// read your height and weight into two float type variables

	// using a if-else-if function to tell your body condition
	if ((height - 105) > (weight + 20)){
		printf("You are too slim\n");
	}else if ((weight - 10) < (height - 105) && (height - 105) <= (weight + 20)){
		printf("You are fit\n");
	}else {
		printf("You are too fat\n");
	}
	return 0;
}