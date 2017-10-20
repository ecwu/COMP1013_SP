#include <stdio.h>
int main (){
	int n;

	printf("Please input an integer\n");
	scanf("%d", &n);

	if (!(n < 0 && n > -10)){
		n = -n;
	}
	// if n is not smaller than 0 and greater than -10, then take opposite number
	
	n = n + n;

	printf("n = %d\n", n);
	return 0;
}