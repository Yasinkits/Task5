#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Total_Purchase_Amount;
    int Total_final_amount;
    printf("Enter the Total Purchase Amount:\n");
    scanf("%d", &Total_Purchase_Amount);

     if(Total_Purchase_Amount> 1000){
         Total_final_amount =Total_Purchase_Amount *0.9;
         printf("A 10percent discount has been given the discount.\n");
         printf("The total Final amount to pay is:%.2d\n",Total_final_amount);
         }else{
           printf("Dear customer no discount applied.\n");
           printf("Final amount to pay is: %.2d\n",Total_Purchase_Amount);
         }

    return 0;
}
