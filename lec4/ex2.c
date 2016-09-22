#include <stdio.h>

int main()
{

	int *a, *b, y, z;
	a = &y;
	b = &z;
	printf("Type two integers seperated with space\n");
	scanf("%d %d", a, b);

	if ( *a < *b )
	{
		printf("The largest number is %d.\n", z);
	}
	else if ( *a > *b )
	{
		printf("The largest number is %d.\n", y);
	}
	else
	{
		printf("The numbers are equal.\n");
	}
	

	return 0;
}
