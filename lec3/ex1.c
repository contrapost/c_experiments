#include <stdio.h>

int main() {
	int array[20];
	printf("Size of char is %ld.\n", sizeof(char));
	printf("Size of float is %ld.\n", sizeof(float));
	printf("Size of double is %ld.\n", sizeof(double));
	printf("Size of long is %ld.\n", sizeof(long));
	printf("Size of signed is %ld.\n", sizeof(signed));
	printf("Size of unsigned is %ld.\n", sizeof(unsigned));
	printf("Size of int * is %ld.\n", sizeof(int *));
	printf("Size of flaot * is %ld.\n", sizeof(float *));
	printf("Size of void * is %ld.\n", sizeof(void *));
	printf("Size of array[20] is %ld.\n", sizeof(array));
	return 0;
}
