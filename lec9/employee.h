typedef struct employee {
    char *name;
    int salary;
} employee;

void addSalary(employee *thisEmpl, int addintion);

void printEmployee(const employee *thisEmpl);

