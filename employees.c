#include <stdio.h>
#include <string.h>
#include "employees.h"


struct Employee emp[MAX_EMPLOYEES];
    int employee_count = 0;

void AddEmployee() {
    // Implementation for adding an employee

    printf("Enter the employee's name: ");
    fgets(emp[employee_count].name, sizeof(emp[employee_count].name), stdin);
    emp[employee_count].name[
    strcspn(emp[employee_count].name, "\n")
] = '\0';


    printf("Enter the employee's ID: ");
    scanf("%d", &emp[employee_count].ID);
    printf("Enter the employee's department: ");
    scanf("%s", emp[employee_count].department);
    printf("Enter the employee's basic salary: ");
    scanf("%f", &emp[employee_count].basic_salary);
    printf("Enter the employee's housing allowance: ");
    scanf("%f", &emp[employee_count].housing_allowance);
    printf("Enter the employee's transport allowance: ");
    scanf("%f", &emp[employee_count].transport_allowance);
    printf("Employee added successfully.\n");
    printf("-------------------------\n");
    employee_count++;

}

void SearchEmployee() {
    // Implementation for searching an employee

    printf("Enter the employee's ID to search: ");
    int search_id;
    scanf("%d", &search_id);

    for (int i = 0; i < employee_count; i++) {
        if (emp[i].ID == search_id) {
            printf("Employee found!\n");
            printf("Name: %s\n", emp[i].name);
            printf("ID: %d\n", emp[i].ID);
            printf("Department: %s\n", emp[i].department);
            printf("Basic Salary: N$ %.2f\n", emp[i].basic_salary);
            printf("Housing Allowance: N$ %.2f\n", emp[i].housing_allowance);
            printf("Transport Allowance: N$ %.2f\n", emp[i].transport_allowance);
            printf("-------------------------\n");
            return;
        }
    }
    printf("Employee not found.\n");
}

void ListEmployees() {
    // Implementation for listing all employees

    printf("List of Employees:\n");
    for (int i = 0; i < employee_count; i++) {
        printf("ID: %d\n", emp[i].ID);
        printf("Name: %s\n", emp[i].name);
        printf("-------------------------\n");
    }
}