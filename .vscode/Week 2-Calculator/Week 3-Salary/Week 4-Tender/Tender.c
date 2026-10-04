#include <stdio.h>

 int main(){

    char supplierName[60];
    float supplierPrice, budget;
    int registered, documentsCompleted;

    printf("\n--------------Tender Evaluation--------------\n");
    printf("Enter Supplier Name: ");
    scanf("%59s", &supplierName);
    printf("Enter Tender: ");
    scanf("%f", &supplierPrice);
    printf("Enter Budget: ");
    scanf("%f", &budget);
    printf("Is Supplier Registered?(1=Yes, 0=NO); ");
    scanf("%d", &registered);
    printf("Are all Documents Completed?(1=Yes, 0=NO); ");
    scanf("%d", &documentsCompleted);

    printf("\n-------------------------------\n");

    if(documentsCompleted == 0 || registered == 0)
    {
        printf("\nSupplier: %s\n", supplierName);
        printf("Status: Disqualified\n"); 
    }
    else if( supplierPrice > budget)
    {
        printf("\nSupplier: %s\n", supplierName); 
        printf("Status: Disqualified\n"); 
    }
    else
    {
        printf("\nSupplier: %s\n", supplierName); 
        printf("Status: Qualified\n");
    }

    printf("\n--------------------------------------\n");

    return 0;
 }