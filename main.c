#include <stdio.h>
#include <stdlib.h>
int main()
{
 int Purchase_amount,Tax,Total_Payable;
 printf("Enter the purchase amount:\n");
 scanf("%d", &Purchase_amount);
 if(Purchase_amount<500){
    Tax = 0.05* Purchase_amount;
    }else{
    Tax =0.08 * Purchase_amount;
    }
   Total_Payable = Purchase_amount + Tax;
    printf("The total payable amount with Tax is %.2d\n",Total_Payable);
return 0;
}
