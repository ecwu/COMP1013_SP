/*
	Zhenghao Wu l630003054
	Make some changes to the following program such that it prints out the biggest elements in the array.
*/
# include <stdio.h>

float sorting(float a[], int length); // function prototype

int main(){
	float value[4] = {2.5, -4.75, 1.2, 3.67};
	printf("the biggest elements in the array: %f\n", sorting(value, 4)); // print out the result by calling the subfunction
	return 0;
}

float sorting(float a[], int length){
	float bigger = 0;
	for (int i = 0; i < length; i++){ // loop for each number in the array and save the biggest number in the 'bigger' variable
		if (a[i] > bigger){ // if the current array element is bigger
			bigger = a[i]; // swap
		}
	}
	return bigger; // return the bigger result
}