#include <stdio.h>
#include "supplier.h"

struct Supplier newSup[MAX_SUPPLIERS];
int supplierCount = 0;

void AddSupplier() {
    
    printf("Enter Supplier ID: ");
    scanf("%d", &newSup[supplierCount].ID);
    
    printf("Enter Supplier Name: ");
    scanf("%s", newSup[supplierCount].name);
    
    printf("Enter Supplier Email: ");
    scanf("%s", newSup[supplierCount].email);
    
    printf("Enter Supplier Number: ");
    scanf("%s", newSup[supplierCount].number);
    
    printf("Enter Supplier Location: ");
    scanf("%s", newSup[supplierCount].location);

    supplierCount++; //  
}

void SearchSupplier() {
    int id, found = 0;
    printf("Enter Supplier ID to search: ");
    scanf("%d", &id);
    
    for (int i = 0; i < supplierCount; i++) {
        if (newSup[i].ID == id) {
            printf("Supplier Found:\n");
            printf("ID: %d\n", newSup[i].ID);
            printf("Name: %s\n", newSup[i].name);
            printf("Email: %s\n", newSup[i].email);
            printf("Number: %s\n", newSup[i].number);
            printf("Location: %s\n", newSup[i].location);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Supplier with ID %d not found.\n", id);
    }
}

void ListSuppliers() {
    if (supplierCount == 0) {
        printf("No suppliers available.\n");
        return;
    }
    
    printf("List of Suppliers:\n");
    for (int i = 0; i < supplierCount; i++) {
        printf("ID: %d, Name: %s, Email: %s, Number: %s, Location: %s\n",
               newSup[i].ID, newSup[i].name, newSup[i].email,
               newSup[i].number, newSup[i].location);
    }
}