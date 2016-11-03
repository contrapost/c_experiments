#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee{
	int id;
	char name[30];
	int salary;
} Employee;

int main()
{
	Employee x;
	x.id = 10;
	strcpy(x.name, "Name name");
	x.salary = 1000;
	
	printf("Employee id: %d, name: %s, salary: %d\n", x.id, x.name, x.salary);
	printf("Sizeof Employee: %lu\n", sizeof(Employee));
}
