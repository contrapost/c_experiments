#include <stdio.h>

int main()
{
	int a, b;
	
	int returnValue = scanf("%d, %d", &a, &b);
	
	printf("a = %d, b = %d, return value was %d\n", a, b, returnValue);
	
	return 0;
}
