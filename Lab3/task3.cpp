#include <stdio.h>
int main(){
	int n;

	printf("Please input an integer\n");
	scanf("%d", &n);

	if (n < 0){
		n = -n;
	}
	//if n is negative, then take absolute value of n

	n = n + n;

	printf("n = %d\n", n);
	return 0;
}