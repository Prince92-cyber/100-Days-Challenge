/*Write a program to find profit or loss percentage given cost prince and selling price...*/
#include <stdio.h>
int main()
{
float cst_price,sel_price,profit,loss;
printf("Enter the cost price :");
scanf("%f",&cst_price);
printf("Enter the selling price :");
scanf("%f",&sel_price);
// Using Conditional statement to check whether it is a profit or loss..
if(cst_price<sel_price)
{
profit=sel_price-cst_price;
printf("You have a profit of %f...",profit);
int profit_per = (profit/cst_price)*100;
printf("Your profit percent is : %d",profit_per);
}
else if(cst_price>sel_price)
{
loss=cst_price-sel_price;
printf("You have a loss of %f...",loss);
int loss_per = (loss/cst_price)*100;
printf("Your loss percent is : %d",loss_per);
}
else
printf("Neither profit nor loss...");
}
// Program is finished Successfully...

