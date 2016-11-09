#include "employee.h"
#include <stdio.h>
#include <math.h>

void addSalary(employee *thisEmpl, int addition) {
    thisEmpl->salary += addition;
    thisEmpl->salary = sqrt(thisEmpl->salary);
}

void printEmployee(employee * thisEmpl) {
    printf("Employee: \n Name: %s\n Salary: %d\n",  (*thisEmpl).name, (*thisEmpl).salary);
    // (*thisEmpl).name is the same as thisEmpl->name
}

