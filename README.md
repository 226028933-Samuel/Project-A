# Municipal Financial Management System (MFMS)

**Group Number:** [Group Number]

## Group Members

| Member    | Name                              | Responsibility                              |
| --------- | --------------------------------- | --------------------------------------------|
| Student 1 | Samuel Chimwamurombe 226028933    | Employee Management & Git Coordination      |
| Student 2 | Karl Shivolo 226081567            | Budget Management                           |
| Student 3 | Justus Sheelekeni 225152924       | Supplier Management                         |
| Student 4 | Risco Mazila 224053299            | Asset Management                            |
| Student 5 | Diogo Carlvalho 225123258         | Reports and Documentation                   |
| Student 6 | Werner Nghituwamata 219096724     | Functions, Integration and Validation       |

## Project Description

The Municipal Financial Management System (MFMS) is a C-based system designed to help manage municipal employees, budgets, suppliers and assets. The system also provides reporting and validation functionality.

## System Features

* Employee management
* Budget management
* Supplier management
* Asset management
* Report generation
* Input validation
* Integrated menu system

## Compilation

Compile the system using GCC:

```bash
gcc -std=c99 -Wall -Wextra -pedantic main.c employees.c budget.c suppliers.c assets.c reports.c -o mfms
```

## Running the System

**Windows:**

```powershell 
.\mfms.exe
```

**Linux/macOS:**

```bash
./mfms
```

The main menu will be displayed after starting the program.
