# include <math.h>
# include <stdio.h>

int primeNumber(int num){
    int a=0;
	for(int i=2;i<num;i++){
		if(num % i == 0){
			a++;
		}
	}
	if(a == 0){
		return 1;
	}
	else {
		return 0;
	}
}
int main () {
	int status = 1, prime = 1;

	for(int i = 2; i <= 100; i++){
		for(int j = 2; j <= i / 2; j++){
			if(i % j == 0){
				status = 0;
				break;
			}
		}
		if(status){
			for (int h = ((h%2 == 0)?h:h+1); h < 100; h = h + 2){
				if(!primeNumber(h-i)){
					printf("%d\n",h);
				}
			}
		}
		status = 1;
		prime = 1;
	}

	/*int prime;
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
								if(k % l==0){
									break;
								}
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
		}*/
	return 0;
}