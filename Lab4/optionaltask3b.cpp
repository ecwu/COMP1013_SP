/*
	Zhenghao Wu l630003054
	when an even number can be represented as the sum of two prime numbers, print out the result as the following format:
	even number = prime number 1 + prime number 2.
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
	int counter = 0;
	for (int position = 4; position <= 100; position = position + 2) {// check for every even number
		for (int i = 2; i <= 100; i++) {// generate the first prime number
			if (primeMeter(i)) {
				for (int j = 2; j <= 100; j++) {// generate the second prime number
					if (primeMeter(j) && i + j <= 100 && i + j < position + 1) {
						if (i + j == position) {// check current even equal to this two prime numbers
							printf("%d = %d + %d\n", position, i, j); // print out the result as the required format
							counter = 1;
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
	}
	return 0;
}
