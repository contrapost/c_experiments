#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char * text = "Hei alle sammen!";
	for(int i = 0; i< 16; i++)
		printf("letter: %c\n", text[i]);
}
