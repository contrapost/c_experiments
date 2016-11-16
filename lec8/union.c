#include <stdio.h>

typedef union testUnion
{
	int i;
	double d;
	char c;
}testUnion;

int main(void)
{
	printf("sizeof(testUnion)=%lu\n", sizeof(testUnion));
	
	testUnion un;
	
	un.d = 3.1415928;
	un.c = 'C';
	un.i = 65;
	
	
	printf("un.i=%d\nun.d=%f\nun.c=%c\n", un.i, un.d, un.c);
	
	return 0;
}
