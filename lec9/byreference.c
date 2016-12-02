#include <stdio.h>

void plusFive(int *x) 
{
	(*x) = (*x) + 5; // changes content the pointer points to
	// x = x + 5; - changes pointer, not the content the pointer points to
}

int main(void)
{
	int a = 7; // on stack
	plusFive(&a); //& - where a is on stack
	printf("a=%d\n", a);
	
	return 0;
}
