#include <stdio.h>
#include "budget.h"

int main(){

    int choice;
    
    do{
        printf("\n=========================================================\n");
        printf("Welcome to the Budget Management System\n");
        printf("=========================================================\n");

        printf("1. Add budget\n");
        printf("2. Display budgets\n");
        printf("3. Check budget status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
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
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}