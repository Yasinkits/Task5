#include <stdio.h>
#include <stdlib.h>
int main()
{
 int hourly_rate, hours_worked,Salary;
 printf("Please enter the hours worked:\n");
 scanf("%d", &hours_worked);
 printf("Please enter the hourly rate:\n");
 scanf("%d", &hourly_rate);

 if (hours_worked>40){
    int overtime = hours_worked -40;
    Salary = (40*hourly_rate + overtime*hourly_rate*1.5);
    }else{
    Salary= hours_worked*hourly_rate;
    }
    printf("The Total salary is : %.2d\n", Salary);
return 0;
}
