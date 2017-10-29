# include <stdio.h>

int primeMeter(int num) {
	if (num <= 1) {
		return -1;
	}
	int counter = 0;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			counter = 1;
			break;
		}
	}
	if (counter) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	int counter = 0, evenSum = 0;
	for (int position = 4; position <= 100; position = position + 2) {
		for (int i = 2; i <= 100; i++) {
			if (primeMeter(i)) {
				for (int j = 2; j <= 100; j++) {
					if (primeMeter(j) && i + j <= 100 && i + j < position + 1) {
						if (i + j == position) {
							counter = 1;
							break;
						}
					}
				}
				if (counter) {
					break;
				}
			}
		}
		if (counter) {
			counter = 0;
		}
		else {
			printf("%d can not represent using two prime number\n", position);
			evenSum += position;
		}
	}
	if (!evenSum) {
		printf("every even number under 100 can be represent by sum of two prime number.\n");
	}
	return 0;
}
