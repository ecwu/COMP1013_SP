/*
	Zhenghao Wu l630003054
	Output a patten like this:
	#
	++
	###
	++++
	#####
	++++++
	#######
	++++++
	#####
	++++
	###
	++
	#
*/
# include <stdio.h>
int main () {
	for (int i = 0; i < 14; i ++){//variable i determine the line number
		if (i%2 == 1){//if line i is odd number line
			for (int j = 0; j <= 6 - ((6 - i) >= 0 ? (6-i) : (i-6)); j ++){//This algorithm can calculate the number of symbols that need to be output by line number
				printf("+");
			}
			printf("\n");//print a line breaks
		}else{//if line i is even number line
			for (int j = 0; j <= 6 - ((6 - i) >= 0 ? (6-i) : (i-6)); j ++){//This algorithm can calculate the number of symbols that need to be output by line number
				printf("#");
			}
			printf("\n");//print a line breaks
		}
	}
	return 0;
}