typedef struct employee {
    char *name;
    int salary;
    struct employee* manager;
} employee;

void addSalary(employee *thisEmpl, int addintion);

void printEmployee(const employee *thisEmpl);
