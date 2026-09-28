/*Write a program to calculate the Electricity bill base on units consumed with these rates :
First 100 units at Rs.5 per unit
Nest 100 units at Rs. 7 per unit
Next 100 units at Rs.10 per unit
Above at Rs.12 per unit...*/
#include <stdio.h>
int main()
{
int units,bill;
printf("Enter the number of units consumed :");
scanf("%d",&units);
// Using Conditional Sstatements to calculate the electricity bill...
if(units<=0)
{
printf("Invalid Input...");
}
else
{
if(units>0 && units<=100)
{
bill=5*units;
printf("Youe Electricity Bill is --> %d",bill);
}
else if(units>100 && units<=200)
{
bill=(5*100)+(7*(units-100));
printf("Your Electrticity Bill is --> %d",bill);
}
else if(units>200 && units<=300)
{
bill=(5*100)+(7*100)+(10*(units-200));
printf("Your Electricity Bill is --> %d",bill);
}
else
{
bill=(5*100)+(7*100)+(10*100)+(12*(units-300));
printf("Your Electricity Bill is --> %d",bill);
}
}
}
// Program is finished Successfully...
