# include <stdio.h>
int main () {
	int ans = 1, aim = 100, sum = 0;

	while (ans < aim){
		sum += ans;
		ans += 2;
	}
	printf("sum of the odd numbers from 1 to 100 is %d\n", sum);
	return 0;
}