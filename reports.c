#include <stdio.h>
#include "Reports.h"
#include "employees.h"
#include "budget.h"
#include "supplier.h"


/*
 * Access the employee and budget arrays
 * declared in employees.c and budget.c.
 */
extern struct Employee emp[MAX_EMPLOYEES];
extern int employee_count;

extern struct Budget budget[MAX_DEPARTMENTS];
extern int budgetCount;


/*
 * REPORT MENU
 */
void reportMenu()
{
    int report_choice;

    do
    {
        printf("\n");
        printf("============================================\n");
        printf("              REPORT MENU\n");
        printf("============================================\n");
        printf("1. Employee Report\n");
        printf("2. Budget Report\n");
        printf("3. Supplier Report\n");
        printf("4. Asset Report\n");
        printf("5. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &report_choice);

        switch(report_choice)
        {
            case 1:
                employeeReport();
                break;

            case 2:
                budgetReport();
                break;

            case 3:
                supplierReport();
                break;

            case 4:
                assetReport();
                break;

            case 5:
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while(report_choice != 5);
}


/*
 * EMPLOYEE REPORT
 *
 * Required by the assignment:
 *
 * Total Employees
 * Average Salary
 * Highest Salary
 * Lowest Salary
 */
void employeeReport()
{
    float totalSalary = 0;
    float averageSalary;
    float highestSalary;
    float lowestSalary;

    printf("\n");
    printf("============================================\n");
    printf("             EMPLOYEE REPORT\n");
    printf("============================================\n");

    /*
     * Check whether any employees exist.
     */
    if(employee_count == 0)
    {
        printf("No employees registered in the system.\n");
        printf("============================================\n");
        return;
    }

    /*
     * Start highest and lowest salary
     * with the first employee's salary.
     */
    highestSalary = emp[0].basic_salary;
    lowestSalary = emp[0].basic_salary;

    /*
     * Calculate total, highest and lowest salary.
     */
    for(int i = 0; i < employee_count; i++)
    {
        totalSalary += emp[i].basic_salary;

        if(emp[i].basic_salary > highestSalary)
        {
            highestSalary = emp[i].basic_salary;
        }

        if(emp[i].basic_salary < lowestSalary)
        {
            lowestSalary = emp[i].basic_salary;
        }
    }

    /*
     * Calculate average salary.
     */
    averageSalary = totalSalary / employee_count;

    /*
     * Display Employee Report.
     */
    printf("Total Employees: %d\n", employee_count);
    printf("Average Salary: N$ %.2f\n", averageSalary);
    printf("Highest Salary: N$ %.2f\n", highestSalary);
    printf("Lowest Salary: N$ %.2f\n", lowestSalary);

    printf("============================================\n");
}


/*
 * BUDGET REPORT
 *
 * Required by the assignment:
 *
 * Total allocated budget
 * Total expenditure
 * Remaining budget
 * Departments exceeding budget
 */
void budgetReport()
{
    float totalAllocated = 0;
    float totalExpenditure = 0;
    float remainingBudget;

    int departmentsOverBudget = 0;

    printf("\n");
    printf("============================================\n");
    printf("              BUDGET REPORT\n");
    printf("============================================\n");

    /*
     * Check whether any budgets exist.
     */
    if(budgetCount == 0)
    {
        printf("No budgets registered in the system.\n");
        printf("============================================\n");
        return;
    }

    /*
     * Calculate total allocated budget
     * and total expenditure.
     */
    for(int i = 0; i < budgetCount; i++)
    {
        totalAllocated += budget[i].allocatedBudget;
        totalExpenditure += budget[i].spentAmount;
    }

    /*
     * Remaining budget formula.
     */
    remainingBudget = totalAllocated - totalExpenditure;

    /*
     * Display main budget information.
     */
    printf("Total Allocated Budget: N$ %.2f\n",
           totalAllocated);

    printf("Total Expenditure: N$ %.2f\n",
           totalExpenditure);

    printf("Remaining Budget: N$ %.2f\n",
           remainingBudget);

    /*
     * Display departments exceeding budget.
     */
    printf("\nDepartments Exceeding Budget:\n");
    printf("--------------------------------------------\n");

    for(int i = 0; i < budgetCount; i++)
    {
        if(budget[i].spentAmount > budget[i].allocatedBudget)
        {
            float amountOver;

            amountOver = budget[i].spentAmount
                       - budget[i].allocatedBudget;

            printf("Department: %s\n",
                   budget[i].departmentName);

            printf("Amount Over Budget: N$ %.2f\n",
                   amountOver);

            printf("--------------------------------------------\n");

            departmentsOverBudget++;
        }
    }

    /*
     * If no department exceeds its budget.
     */
    if(departmentsOverBudget == 0)
    {
        printf("No departments are exceeding their budget.\n");
    }

    printf("============================================\n");
}


/*
 * SUPPLIER REPORT
 *
 * Supplier functionality has not yet been
 * provided in the current project code.
 */
void supplierReport()
{
    printf("\n");
    printf("============================================\n");
    printf("              SUPPLIER REPORT\n");
    printf("============================================\n");

    printf("Supplier module is not currently available.\n");
    printf("No suppliers can be displayed yet.\n");

    printf("============================================\n");
}


/*
 * ASSET REPORT
 *
 * Asset functionality has not yet been
 * provided in the current project code.
 */
void assetReport()
{
    printf("\n");
    printf("============================================\n");
    printf("                ASSET REPORT\n");
    printf("============================================\n");

    printf("Asset module is not currently available.\n");
    printf("No municipal assets can be displayed yet.\n");

    printf("============================================\n");
}