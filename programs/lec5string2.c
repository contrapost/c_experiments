#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char text[] = "Hei alle sammen!";
	text[7] = 'g';
	printf("As chars:\n");
	for(int i = 0; i< 16; i++)
		printf("letter: %c\n", text[i]);
		printf("As ASCII:\n");
	for(int i = 0; i< 16; i++)
		printf("letter: %d\n", text[i]); 
	printf("As ASCII with 0 at the end:\n");
	for(int i = 0; i< 17; i++)
		printf("letter: %d\n", text[i]);
}
