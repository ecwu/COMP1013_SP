/*
	Zhenghao Wu l630003054
	see if there is an even number which cannot be the sum of two prime numbers
*/
# include <stdio.h>

int primeMeter(int num) { // this function can check the input parameter is a prime number or not
	if (num <= 1) {
		return -1;
	}
	int counter = 0;
	for (int i = 2; i <= num / 2; i++) {// 
		if (num % i == 0) {// Prime numbers can only be divided by one or itself.
			counter = 1;
			break;// jump out of the loop if it can be divided with no remainder
		}
	}
	if (counter) {
		return 0;// if it is not a prime number
	}
	else {
		return 1;// if it is a prime number
	}
}

int main() {
	int counter = 0, evenSum = 0;
	for (int position = 4; position <= 100; position = position + 2) {// check for every even number
		for (int i = 2; i <= 100; i++) {// generate the first prime number
			if (primeMeter(i)) {
				for (int j = 2; j <= 100; j++) {// generate the second prime number
					if (primeMeter(j) && i + j <= 100 && i + j < position + 1) {
						if (i + j == position) {// check current even equal to this two prime numbers
							counter = 1;// if the even number can be represent by two prime numbers then change the counter
							break;// jump out of the loop
						}
					}
				}
				if (counter) {
					break;// jump out of the loop, and start the next number
				}
			}
		}
		if (counter) {
			counter = 0;//reset the counter
		}
		else {
			printf("%d can not represent by sum of two prime number\n", position);// if there is a match
			evenSum += position;
		}
	}
	if (!evenSum) {//if there was no match
		printf("every even number under 100 can be represent by sum of two prime number.\n");
	}
	return 0;
}
