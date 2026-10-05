//Contains the full code

#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "Reports.h"
#include "supplier.h"


int main(){

    int main_choice;
    int emp_choice;
    int budget_choice;
    int supplier_choice;

    do{
    printf("\n==================MUNICIPAL FINANCIAL MANAGEMENT SYSTEM==================\n");

        printf("1. Employee Management\n");
        printf("2. Budget Management\n");
        printf("3.Supplier Management\n");
        printf("4. Asset Management\n");
        printf("5. Reports\n");
        printf("6. Exit\n");
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
                            getchar(); // Clear the input buffer before reading a string
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
                            getchar(); // Clear the input buffer
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
                do{
                    printf("\n=========Supplier Management Menu:=========");
                printf("\n1. Add Supplier\n");
                printf("\n2. Search Supplier\n");
                printf("\n3. List Suppliers\n");
                printf("\n4. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &supplier_choice);

                switch(supplier_choice) {
                    case 1:
                        getchar();
                        AddSupplier();
                        break;
                    case 2:
                        SearchSupplier();
                        break;
                    case 3:
                        ListSuppliers();
                        break;
                    case 4:
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
            } while(supplier_choice != 4);
            break;

        case 4:

                break;

            case 5:
                reportMenu();
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(main_choice != 6);

    return 0;
}