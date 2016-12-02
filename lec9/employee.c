#include "employee.h"
#include <stdio.h>
#include <math.h>

// void addSalary(employee thisEmpl, int addition) { ∕∕ <- by value, will get copy of employee and increase salary for the copy, not the original.
void addSalary(employee* thisEmpl, int addition) {   // <- by reference
    thisEmpl->salary += addition;
    thisEmpl->salary = sqrt(thisEmpl->salary);
}

void printEmployee(const employee* thisEmpl) {
    printf("Employee: \n Name: %s\n Salary: %d\n",  (*thisEmpl).name, (*thisEmpl).salary);
    // (*thisEmpl).name is the same as thisEmpl->name
}

/*
void changeName(employee thisEmpl, char* newName) {   // <- by value,
    strcpy(thisEmpl.name, newName);				// since name in struct is pointer, changing name will effect original employee despite that we sent 														// employee by value
}
*/
