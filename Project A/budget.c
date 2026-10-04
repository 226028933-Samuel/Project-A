#include <stdio.h>
#include <string.h>
#include "budget.h"

struct Budget budget[MAX_DEPARTMENTS];
int budgetCount = 0;

void addBudget()
    {
        if(budgetCount >= MAX_DEPARTMENTS) {
            printf("Cannot add more budgets. Maximum limit reached.\n");
            return;
        }
        
        getchar();

        printf("Enter department name: ");
        fgets(budget[budgetCount].departmentName, sizeof(budget[budgetCount].departmentName), stdin);

        budget[budgetCount].departmentName[strcspn(budget[budgetCount].departmentName, "\n")] = '\0';

        printf("Enter budget amount: ");
        scanf("%f", &budget[budgetCount].allocatedBudget);
        
        while(budget[budgetCount].allocatedBudget < 0) {
            printf("Invalid. Budget cannot be negative Try again: ");
            scanf("%f", &budget[budgetCount].allocatedBudget);
        }
        printf("Enter budget spent: ");
        scanf("%f", &budget[budgetCount].spentAmount);

        while(budget[budgetCount].spentAmount < 0 ){
            printf("Invalid. Spent amount cannot be negative. Try again: ");
            scanf("%f", &budget[budgetCount].spentAmount);
        }

        printf("Budget added successfully!\n");
        printf("---------------------------------------\n");

        budgetCount++;
    }

void displayBudgets()
    {
        for(int i = 0; i < budgetCount; i++) {
            printf("Department: %s\n", budget[i].departmentName);
            printf("Allocated Budget: %.2f\n", budget[i].allocatedBudget);
            printf("Spent Amount: %.2f\n", budget[i].spentAmount);
            printf("Remaining Budget: %.2f\n", budget[i].allocatedBudget - budget[i].spentAmount);
            if(budget[i].spentAmount > budget[i].allocatedBudget) {
                printf("Status: Over Budget\n");
            } else if(budget[i].spentAmount == budget[i].allocatedBudget) {
                printf("Status: Exactly on Budget\n");
            } else {
                printf("Status: Within Budget\n");
            }
            printf("---------------------------------------\n");
        }
    }

void checkBudgetStatus()
    {
        for(int i = 0; i < budgetCount; i++) {
            float remainingBudget = budget[i].allocatedBudget - budget[i].spentAmount;
            if(remainingBudget < 0) {
                printf("Department: %s is over budget by %.2f\n", budget[i].departmentName, -remainingBudget);
            } else if(remainingBudget == 0) {
                printf("Department: %s has exactly spent its allocated budget.\n", budget[i].departmentName);
            } else {
                printf("Department: %s has %.2f remaining in its budget.\n", budget[i].departmentName, remainingBudget);
            }

            printf("---------------------------------------\n");
        }
    }