#include <stdio.h>

int main(int argc, char* argv[]){
	int a;
	sscanf(argv[1],"%d",&a);
	
	if(a == 0) {
		printf("NaN");
	}
	else if(a % 2 == 0) {
		printf("Number %d is read and it is even.\n", a);
	} 
	else {
		printf("Number %d is read and it is odd.\n", a);
	}
	
	return 0;
}
