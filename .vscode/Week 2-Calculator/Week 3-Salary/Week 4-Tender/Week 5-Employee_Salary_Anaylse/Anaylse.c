#include <stdio.h>

 int main(){

    float salary, total = 0, highest = 0, lowest = 0, average;

    for(int i = 1; i <= 5; i++){
        printf("Enter the salary of the employee %d:", i);
        scanf("%f", &salary);
        
        total = total + salary;
        if(salary > highest){
            highest = salary;
        }
        if(salary < lowest || lowest == 0){
            lowest = salary;
        }
    }
    average = total / 5;

    printf("Total salary: %.2f\n", total);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);
    printf("Average salary: %.2f\n", average);

    return 0;
}
