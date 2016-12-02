#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double x = 1, y = 2, z = 3;

int main(void) 
{
    printf("x = %f, y = %f, z = %f\n", x, y, z);
    
    for(int i = 0; i < 3; i++)
    {
 //   	(*((&x) + i)) += 1;		// equals to (&x)[i] += 1;
    	(&x)[i] += 1;			// adds 1 to all doubles
    }
    
    printf("x = %f, y = %f, z = %f\n", x, y, z);
    
    return 0;
}
