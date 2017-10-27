# include <stdio.h>
int main () {
	for (int i = 0; i <= 14; i ++){
		if (i%2 == 1){
			for (int j = 0; j <= 7-((7-i)>0 ? (7-i) : (i-7)); j ++){
				printf("#");
			}
			printf("\n");
		}else{
			for (int j = 0; j <= 7-((7-i)>0 ? (7-i) : (i-7)); j ++){
				printf("+");
			}
			printf("\n");
		}
	}
	return 0;
}