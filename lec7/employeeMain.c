#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

int main(void) {
    
    employee someone;
    someone.name = malloc(100);
    strncpy(someone.name, "Ivanov Peter", 100);
    
    someone.salary = 1000000;
    
    printEmployee(&someone);
    addSalary(&someone, 20000);
    
    printEmployee(&someone);
    
    free(someone.name);
    someone.name = NULL;
    
    return 0;
}
