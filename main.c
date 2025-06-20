#include <stdio.h>
#include <stdlib.h>
int main()
{
  int Salary, Years_of_employment;
  printf("Enter the Salary:\n");
  scanf("%d", &Salary);
  printf("Enter the years you have been employed in this company\n");
  scanf("%d", &Years_of_employment);
    if(Salary >= 5000 || Years_of_employment>2){
    printf("You are eligible for the loan.\n");
    }else {
     printf("Sorry, you are not eligible for the loan.\n");
    }

return 0;
}
