#include <stdio.h>
#include <stdlib.h>
int main()
{
 int Withdrawal,Net;
 printf("Enter the Amount you want to Withdraw:\n");
 scanf("%d", &Withdrawal);
 if(Withdrawal < 500){
  Net = Withdrawal -10;
 }else {
   Net = Withdrawal;
 }
 printf("Net amount received : %.2d\n", Net);

return 0;
}
