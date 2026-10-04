#include <stdio.h>

 int main(){

    float salary, housing, transport, tax, grossSalary, netSalary;

    printf("Enter Salary: ");
    scanf("%f", &salary);
    printf("Enter Housing Allowance: ");
    scanf("%f", &housing);
    printf("Enter Transport Alowance: ");
    scanf("%f", &transport);
    printf("Enter Tax: ");
    scanf("%f", &tax);

    grossSalary = salary + housing + transport;
    netSalary = grossSalary - tax;
    
    printf("\n--------------------------------------\n");

    printf("Gross Salary is: N$%.2f\n",grossSalary);
    printf("Net Salary is: N$%.2f\n", netSalary);

    printf("\n--------------------------------------\n");
    
    return 0;
 }
