#include <stdio.h>
#include <math.h>
int main () {
	for (int i = 1; i < 1000; i++){
		if (i%3 == 0){
			int operand = i;
			while (operand != 153){
				int digits = 0, ten = 0, hundreds = 0, thousand = 0, cubed = 0;
				digits = operand/1%10;
				ten = operand/10%10;
				hundreds = operand/100%10;
				thousand = operand/1000%10;
				cubed = digits+ten+hundreds+thousand;

				operand = cubed;
			}
		}
		printf("%d\t is ok\n", i);
	}
	return 0;
}