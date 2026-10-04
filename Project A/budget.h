#ifndef BUDGET_H
#define BUDGET_H

#define MAX_DEPARTMENTS 50

void addBudget();

struct Budget {
    char departmentName[50];
    float allocatedBudget;
    float spentAmount;
};

void displayBudgets();
void checkBudgetStatus();

#endif // BUDGET_H
