/*
	Zhenghao Wu l630003054
	Input year, month and date and output the sum_day which means the total days in this year until the input date.
	hints: leap year if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
*/
#include <stdio.h>
int main(void){
	int year, month, date, sum = 0;
	printf("please input year\n");
	scanf("%d", &year);

	printf("please input month\n");
	scanf("%d", &month);

	printf("please input date\n");
	scanf("%d", &date);
	// read year month and date one by one

	if (year*month*date < 0 || month > 12 || date > 31) {// check if the input is a negative number or invalid date
		printf("Invalid Input");
		return -1;
	}


	switch (month - 1) {// add days in every month into the sum number
	case 11:
		sum += 30;
	case 10:
		sum += 31;
	case 9:
		sum += 30;
	case 8:
		sum += 31;
	case 7:
		sum += 31;
	case 6:
		sum += 30;
	case 5:
		sum += 31;
	case 4:
		sum += 30;
	case 3:
		sum += 31;
	case 2:
		sum += ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28); // check whether the input year is a leap year or not
	case 1:
		sum += 31;
	}
	sum += date;// add left date to the sum
	printf("sum day = %d\n", sum);
	return 0;
}
