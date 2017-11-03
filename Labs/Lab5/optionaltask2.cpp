#include <stdio.h>
int main () {
	for (int i = 1; i < 1000; i++){
		if (i%3 == 0){
			int operand = i;
			while (operand != 153){
				int digits = 0, ten = 0, hundreds = 0, thousand = 0, cubed = 0;
				digits = operand % 10;
				operand -= operand % 10;
				if(i > 10){
					ten = (operand % 100)/10;
					operand -= operand % 100;
				}
				if(i>100){
					hundreds = (operand % 1000)/100;
					operand -= operand % 1000;
				}
				if(i>1000){
					thousand = (operand % 10000)/1000;
					operand -= operand % 10000;
				}
				cubed = digits * digits * digits + ten * ten * ten + hundreds * hundreds * hundreds + thousand * thousand * thousand;

				operand = cubed;
			}
		}
		printf("%d\t is ok\n", i);
	}
	return 0;
}