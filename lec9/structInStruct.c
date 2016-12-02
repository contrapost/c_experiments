#include "structInStruct.h"
#include <stdio.h>
#include <math.h>

// void addSalary(employee thisEmpl, int addition) { ∕∕ <- by value, will get copy of employee and increase salary for the copy, not the original.
void addSalary(employee* thisEmpl, int addition) {   // <- by reference
    thisEmpl->salary += addition;
    thisEmpl->salary = sqrt(thisEmpl->salary);
}

void printEmployee(const employee* thisEmpl) {
    printf("Employee: \n Name: %s\n Salary: %d\n",  (*thisEmpl).name, (*thisEmpl).salary);
    if(thisEmpl->manager == NULL)
    {
    	printf("No manager for you!\n");
    }
    else
    {    
    	printEmployee(thisEmpl->manager);
    }
}
