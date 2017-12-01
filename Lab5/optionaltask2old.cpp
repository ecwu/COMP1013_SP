#include <stdio.h>
int main() {
	int processed = 0, digits = 0, times = 0, indicator = 0;
	for (int n = 3; n <= 1000; n += 3) {
		times = 0;
		processed = n;

		while (processed != 153) {
			int one = 0, ten = 0, hundreds = 0, thousand = 0, operand = processed;
			digits = 0;

			while (operand > 0) {
				operand = operand / 10;
				digits += 1;
			}

			one = processed / 1 % 10;
			ten = processed / 10 % 10;
			hundreds = processed / 100 % 10;
			thousand = processed / 1000 % 10;

			processed = 0;

			switch (digits){
			case 4:
				processed += thousand*thousand*thousand;
			case 3:
				processed += hundreds*hundreds*hundreds;
			case 2:
				processed += ten*ten*ten;
			case 1:
				processed += one*one*one;
			}
			times++;

			if (times >= 500) {
				printf("%d can't reach 153\n", n);
				indicator = 1;
				break;
			}
		}
		printf("number:%d takes %d calculation to reach 153\n", n, times);
	}
	if (indicator == 0) {
		printf("Every number which are the multiple of 3 can finally reach 153\n");
	}
	return 0;
}