#include <stdio.h>

void positive(int number)
{
	printf("positive = %d\n", number);
}

void negative(int number)
{
	printf("negative = %d\n", -number);
}

void (*testfunc)(int number) = NULL; // Global

int main(void)
{
	
	// void (*testfunc)(int number) = NULL; // local
	
	testfunc = &positive; //can be called without "&": testfunc = positive;
	testfunc(3);
	
	testfunc = &negative;
	testfunc(7);
	return 0;
}
