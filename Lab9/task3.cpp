#include <stdio.h>
#include <math.h>
struct point{
	float x;
	float y;
};

struct line{
	struct point extremePoint1;
	struct point extremePoint2;
};

struct triangle{
	struct point vertex1;
	struct point vertex2;
	struct point vertex3;
};

float sideLength (struct point a, struct point b);

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

	printf("Length = %f\n", sideLength(line1.extremePoint1, line1.extremePoint2));

	circumference += sideLength(triangle1.vertex1,triangle1.vertex2);
	circumference += sideLength(triangle1.vertex1,triangle1.vertex3);
	circumference += sideLength(triangle1.vertex2,triangle1.vertex3);

	printf("Circumference = %f\n", circumference);

	return 0;
}

float sideLength (struct point a, struct point b){
	float x = abs(a.x - b.x);
	float y = abs(a.y - b.y);

	return sqrt(pow(x, 2) + pow(y, 2));
}
