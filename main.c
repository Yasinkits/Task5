#include <stdio.h>
#include <stdlib.h>
int main()
{
 int Units_consumed;
 double Bill;
 printf("Enter the units Consumed:\n");
 scanf("%d", &Units_consumed);
 if (Units_consumed < 200){
    Bill = Units_consumed *0.50;
 }else{
    Bill= Units_consumed* 0.75;
 }
 printf("The total bill is:%.2lf", Bill);
return 0;
}
