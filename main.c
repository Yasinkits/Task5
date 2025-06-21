#include <stdio.h>
#include <stdlib.h>
int main()
{
  double Cost_price,Selling_price;
  printf("Enter the Cost price:\n");
  scanf("%lf", &Cost_price);
  printf("Enter the Selling Price:\n");
  scanf("%lf", &Selling_price);
  double Amount= Selling_price-Cost_price;
  if(Amount > 0){
    printf("Profit : %.2lf\n", Amount);
  }else if(Amount < 0){
    printf("Loss: %.2lf",-Amount);
  }

return 0;
}
