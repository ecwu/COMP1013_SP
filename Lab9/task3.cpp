/*
	Zhenghao Wu l630003054
	
	- calculate the length of the line and the circumference of the triangle

	requirement:
	- Use sqrt() function to calculate square root
	- #include <math.h> should be added at the beginning of the program)
	- The coordinates of points should be declared as float or double type.
*/
#include <stdio.h>
#include <math.h>
struct point{
	float x;
	float y;
};
// def a point type with two float variable stand for x and y

struct line{
	struct point extremePoint1;
	struct point extremePoint2;
};
// def a line type with two points(extremePoint), each have individual x and y

struct triangle{
	struct point vertex1;
	struct point vertex2;
	struct point vertex3;
};
// def a triangle type with three points(vertex), each have individual x and y

float sideLength (struct point a, struct point b); // function prototype

int main () {
	struct line line1;
	struct triangle triangle1;

	float circumference = 0.0;

	line1.extremePoint1.x = 2.0;
	line1.extremePoint1.y = 7.0;
	line1.extremePoint2.x = 10.0;
	line1.extremePoint2.y = 9.0;

	triangle1.vertex1.x = 6.0;
	triangle1.vertex1.y = 5.0;
	triangle1.vertex2.x = 8.0;
	triangle1.vertex2.y = 3.0;
	triangle1.vertex3.x = 2.0;
	triangle1.vertex3.y = 0.0;

	// assign point data to the struct variable

	printf("Length = %f\n", sideLength(line1.extremePoint1, line1.extremePoint2)); 
	// call the function and print out

	circumference += sideLength(triangle1.vertex1,triangle1.vertex2);
	circumference += sideLength(triangle1.vertex1,triangle1.vertex3);
	circumference += sideLength(triangle1.vertex2,triangle1.vertex3);
	// call the function three times and calculate the circumference

	printf("Circumference = %f\n", circumference);

	return 0;
}

float sideLength (struct point a, struct point b){
	float x = abs(a.x - b.x);
	float y = abs(a.y - b.y);
	// calculate the x, y distance between point a and point b

	return sqrt(pow(x, 2) + pow(y, 2));
	// return distance using Pythagorean theorem
}
