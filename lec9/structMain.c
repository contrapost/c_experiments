#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structInStruct.h"

int main(void) {
    
    employee someone;
    someone.name = malloc(100);
    strncpy(someone.name, "Ivanov Peter", 100);
    
    someone.salary = 1000000;
    
    employee tmg;
    tmg.name = malloc(100);
    strncpy(tmg.name, "Semenov Fedr", 100);
    
    tmg.salary = 1000000000;
    tmg.manager = NULL;
    
    someone.manager = &tmg;
    
    printEmployee(&someone);
    addSalary(&someone, 20000);
    
    printEmployee(&someone);
    
    free(someone.name);
    someone.name = NULL;
    
    return 0;
}
