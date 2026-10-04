//Contains the full code

#include <stdio.h>
#include "employees.h"
#include "budget.h"

int main(){

    int main_choice;
    int emp_choice;
    int budget_choice;

    do{
    printf("\n==================MUNICIPAL FINANCIAL MANAGEMENT SYSTEM==================\n");

        printf("1. Employee Management\n");
        printf("2. Budget Management\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &main_choice);

        switch(main_choice) {
            case 1:
                do {
                    printf("\nEmployee Management Menu:\n");
                    printf("1. Add Employee\n");
                    printf("2. Search Employee\n");
                    printf("3. List Employees\n");
                    printf("4. Back to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &emp_choice);

                    switch(emp_choice) {
                        case 1:
                            AddEmployee();
                            break;
                        case 2:
                            SearchEmployee();
                            break;
                        case 3:
                            ListEmployees();
                            break;
                        case 4:
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                } while(emp_choice != 4);
                break;

            case 2:
                do {
                    printf("\n=======Budget Management Menu:=========\n");
                    printf("1. Add Budget\n");
                    printf("2. Display Budgets\n");
                    printf("3. Check Budget Status\n");
                    printf("4. Back to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &budget_choice);

                    switch(budget_choice) {
                        case 1:
                            addBudget();
                            break;
                        case 2:
                            displayBudgets();
                            break;
                        case 3:
                            checkBudgetStatus();
                            break;
                        case 4:
                            break;
                        default:
                            printf("Invalid choice. Please try again.\n");
                    }
                } while(budget_choice != 4);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(main_choice != 3);

    return 0;
}