#include <stdio.h>

 int main(){

  int department; 
  float balance, revenue, expenses;
  double payroll, procurement, assets;

  
  printf("====Municipal Budget Calculator====\n");
  printf("-----------------------------------\n");

  printf("\nEnter total department:");
  scanf("%d", &department);
  printf("\nEnter total Revenue:");
  scanf("%f", &revenue);
  printf("\nEnter total Expenses:");
  scanf("%f", &expenses);
  printf("\nEnter total payroll:");
  scanf("%lf", &payroll);
  printf("\nEnter procurement:");
  scanf("%lf", &procurement);
  printf("\nEnter assets:");
  scanf("%lf", &assets);

  balance = revenue - expenses;

  printf("-----------------------------------\n");

  printf("Department is: %d\n",department);
  printf("Balance is: %.2lf\n",balance);
  printf("Revenue is: %.2lf\n",revenue);
  printf("Expenses is: %.2lf\n",expenses);
  printf("Payroll is: %.2lf\n",payroll);
  printf("Procurement is: %.2lf\n",procurement);
  printf("Assets is: %.2lf\n",assets);

  return 0;
 }