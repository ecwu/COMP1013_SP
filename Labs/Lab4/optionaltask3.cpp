# include <math.h>
# include <stdio.h>
int main () {
	int prime;
		for (int even = 4; even <= 100; even = even + 2){
			prime = 0;
			for(int i = 2; i <= even; i++){
				for(int j = 2; j <= sqrt((double)i); j++){
					if(j % i==0){
						break;
					}
					if(j > sqrt((double)i)){
						for(int k = j + 1; k <= even; k++){
							for(int l = j; l <= sqrt((double)j+1); l++){
								if (j + l == even){
									prime = prime + 1;
								}
							}
						}
					}
				}
			}
			if (prime == 0){
					printf("%d ",even);
			}
			printf("\n");
		}
	return 0;
}