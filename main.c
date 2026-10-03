//Contains the full code

#include <stdio.h>
#include "employees.h"




    int main(void){
        int main_choice;
        int emp_choice;
            do{

                printf("\nWelcome to the MFMS\n");

                printf("Please select an option:\n");
                printf("1. Employee Management\n");
                printf("2. Budget Management\n");
                printf("3. Exit\n");
                scanf("%d", &main_choice);

                switch (main_choice) {
                    case 1:
                         do{

                            printf("\nEmployee Management:\n\n");
                            printf("Please select an option:\n");
                            printf("1. Add Employee\n");
                            printf("2. Search Employee\n");
                            printf("3. List Employees\n");
                            printf("4. Back to Main Menu\n");
                            printf("Enter your choice: \n\n");
                            scanf("%d", &emp_choice);
                                switch (emp_choice) {
                                   
                                            case 1:
                                                getchar(); // Consume the newline character left by previous input
                                                AddEmployee();                                                
                                                break;
                                            case 2:
                                                SearchEmployee();                                                
                                                break;
                                            case 3:
                                                ListEmployees();                                                
                                                break;
                                            case 4:
                                                printf("Exiting Employee Management.\n");
                                                break;
                                            default:
                                                printf("Invalid choice.\n");
                                            }
                         }while (emp_choice != 4);

                    break;

                }
              

            }while (main_choice != 3);

              return 0;
    }
    