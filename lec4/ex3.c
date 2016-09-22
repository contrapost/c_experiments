#include <stdio.h>
#include <stdlib.h>

void sort(int *array, int counter);

int main(){
	int number, counter, size;
	
	int *p_array;
	
	int array[10];
	
	counter = 0;
	size = 11;
	
	p_array = malloc(sizeof(int)*size);
	
	printf("Write a sequence of integers, to end input write 0.\n");
	
	scanf("%d", &number);
	
	while (number != 0) 
	{
		if (size > counter) {
			p_array[counter++] = number;
		} 
		else {
			size *= 2;
			p_array  = realloc(p_array, sizeof(int)*(size++));
			if (p_array == NULL) {
				printf("Can't allocate memory\n");
		  		return -1;
			}
		}
		
		scanf("%d", &number);
	}
	
	sort(p_array, counter);
	
	return 0;
}

void sort(int *array, int counter){
	int swap;
	
	for (int c = 0 ; c < ( counter - 1 ); c++)
	  {
		for (int d = 0 ; d < counter - c - 1; d++)
		{
		  if (array[d] > array[d+1]) /* For decreasing order use < */
		  {
		    swap       = array[d];
		    array[d]   = array[d+1];
		    array[d+1] = swap;
		  }
		}
	  }

	printf("The sorted array is:\n");
	
	for(int i = 0; i < counter; i++) {
		printf("%d ", array[i]);
	}
	
	printf("\n");
	
	free(array);
}
