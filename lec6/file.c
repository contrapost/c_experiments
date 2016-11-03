#include <stdio.h>

int main()
{
	int a = 3, b = 6;
	
	FILE* file = fopen("newfile.txt", "w");
	
	fprintf(file, "a = %d, b = %d\n", a, b);
	
	fclose(file);
	
	return 0;
}
