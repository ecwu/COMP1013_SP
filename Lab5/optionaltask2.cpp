/*
	Author: Zhenghao Wu l630003054
    verify all the numbers under 1000 which are the multiple of 3 will finally reach 153 through a series calculation
    calculation:cube each digit and then get the sum, repeat this process
*/
#include <stdio.h>
int main() {
	int processed = 0, times = 0, indicator = 0;
	for (int n = 3; n <= 1000; n += 3) {// check every number under 1000 which are the multiple of 3
		times = 0;
		processed = n; 

		while (processed != 153) {// if the number not reached 153
			int one = 0, ten = 0, hundreds = 0, thousand = 0, operand = processed, digits = 0;
			

			while (operand > 0) {// read how many digits in  the number
				operand = operand / 10;
				digits += 1;
			}

			one = processed / 1 % 10;
			ten = processed / 10 % 10;
			hundreds = processed / 100 % 10;
			thousand = processed / 1000 % 10;

            /*
            read the every digits in the number
            */

			processed = 0; //reset the processed number to 0; ready to store number number

			switch (digits){// do the operation via the digits of the number
			case 4:
				processed += thousand*thousand*thousand;
			case 3:
				processed += hundreds*hundreds*hundreds;
			case 2:
				processed += ten*ten*ten;
			case 1:
				processed += one*one*one;
			}
			times++; // times variable will record how many calculation done for this number

			if (times >= 500) {// if there are too many calculation done for this number
				printf("%d can't reach 153\n", n); 
				indicator = 1;
				break;// jump out of the loop
			}
		}
		printf("number:%d takes %d calculation to reach 153\n", n, times);
	}
	if (indicator == 0) { // if every number reach 153
		printf("Every number under 1000 which are the multiple of 3 can finally reach 153\n");
	}
	return 0;
}