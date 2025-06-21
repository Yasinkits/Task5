#include <stdio.h>
#include <stdlib.h>
int main()
{
int Membership_Duration;
double Total_Membership_fee,Final_payable_amount,Discount;
printf("Enter the Membership Duration:\n");
scanf("%d", &Membership_Duration);
printf("Enter the Total Membership fee:\n");
scanf("%lf", &Total_Membership_fee);
if(Membership_Duration >=1 && Membership_Duration <=3){
     Discount= 0.05;
   }else if(Membership_Duration >= 4){
   Discount =0.1;
   }
    Final_payable_amount = Total_Membership_fee* (1- Discount);
   printf("The final payable amount : %.2lf",Final_payable_amount);

return 0;
}
