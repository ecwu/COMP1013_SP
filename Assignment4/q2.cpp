/*
	Author: Zhenghao Wu l630003054
	- check if the input positive integer is a prime number
	  - If it is a prime number, display the message
	    - "The input number is a prime number"
	  - otherwise calculate its biggest divisor (except itself) and output it

	  For example, if the input is 18, its biggest divisor is 9
	  
	- Requirements:
      - The program contains three functions: main, prime, and biggestDivisor.
      - The main function reads the number and outputs results.
      - The function prime is to check if a number is prime.
      - The function biggestDivisor is to calculate the biggest divisor of a number and return it.
*/

# include <stdio.h>

int prime(int input);
int biggestDivisor(int input); // function call

int main () {
	int number;

	puts("Please input a positive integer");
	scanf("%d", &number);

	if (prime(number) == 1){ // prime function call
		puts("The input number is a prime number");
	}else{
		printf("%d's biggest divisor is %d\n", number, biggestDivisor(number)); // biggestDivisor function call
	}

	return 0;
}

int prime(int input){
	int indicator = 1; // default status: consider the input is a prime number
	for (int i = 2; i <= input / 2; i++){
		if(input % i == 0){ // if the number can be divided by other number
			indicator = 0; // this number is not a prime number
		}
	}
	return indicator; // return the indicator
}

int biggestDivisor(int input){
	int biggest = 0;
	for (int i = 2; i <= input / 2; i++){
		if(input % i == 0){ // check for every divisor
			if (input / i > biggest){
				biggest = input / i; // save the biggest one to the 'biggest variable'
			}
		}
	}
	return biggest;
}