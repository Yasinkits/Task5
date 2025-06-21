#include <stdio.h>
#include <stdlib.h>
int main()
{
 int Price_Per_Unit,Quantity,Total_Amount;
 printf("Enter the Price per unit:\n");
 scanf("%d",&Price_Per_Unit);
 printf("Enter the Quantity\n");
 scanf("%d",&Quantity);
 Total_Amount =Price_Per_Unit*Quantity;
 if (Quantity >=10){
     Total_Amount *= 0.85;
 }
 printf("The total cost is:%.2d\n",Total_Amount);
return 0;
}
