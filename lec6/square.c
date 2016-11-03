#include <stdio.h>

typedef struct point 
{
	float x, y;
} point;

typedef struct triangle
{
	point points[3];
} triangle;

int main()
{
	
	triangle thisTriangle;
	
	FILE* file = fopen("newfile.txt", "rb");
	fread(&thisTriangle, sizeof(triangle), 1, file);
	printf("last point is %f, %f\n", thisTriangle.points[2].x);
	fclose(file);
	
	return 0;
}
