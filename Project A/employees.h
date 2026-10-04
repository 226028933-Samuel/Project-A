
#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#define MAX_EMPLOYEES 100

void AddEmployee();
    struct Employee {
        char name[100];
        int ID;
        char department[50];
        float basic_salary,housing_allowance,transport_allowance;
    };

void SearchEmployee();
void ListEmployees();


#endif // EMPLOYEES_H
