#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int value = 100;
	
	printf("Code is at %p\n", (void*)main);
	printf("Stack is at %p\n", (void*)&value);
	printf("Heap is at %p\n", malloc(8));
	
	return 0;
	
}
