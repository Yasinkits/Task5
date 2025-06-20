#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Employee_Years_of_service;
    int Basic_salary;
    int Final_Salary;
    float Bonus ;
    printf("Enter the the Years Of Service:\n");
    scanf("%d", &Employee_Years_of_service);
    printf("Enter the Basic Salary:\n");
    scanf("%d" ,&Basic_salary);

    if (Employee_Years_of_service > 5){
     Bonus = 0.05 * Basic_salary;
     Final_Salary = Basic_salary + Bonus;
      printf("The Final salary for the employee is:%.2d\n", Final_Salary);
    }else{
      printf("5 years of service not yet met please continue working with us\n");
    }
    return 0;
}
