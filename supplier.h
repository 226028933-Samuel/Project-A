
#ifndef SUPPLIER_H
#define SUPPLIER_H

#define MAX_SUPPLIERS 100

    struct Supplier {
        int ID;
        char name[50];
        char email[50];
        char number[15];
        char location[50];
    };
void AddSupplier();
void SearchSupplier();
void ListSuppliers();


#endif // SUPPLIER_H
