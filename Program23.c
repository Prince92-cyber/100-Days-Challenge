/*Write a program to calculate the library fine based on late days as follows :
First 5 days late : Rs.2/day
Next 5 days late : Rs.4/day
Next 20 days late : Rs.6/day
More than 30 days : Membership Cancelled... */
#include <stdio.h>
int main()
{
int days,fine;
printf("Enter the number of days he is late :");
scanf("%d",&days);
// Using Conditional Statements...
if(days<=0)
{
printf("Invalid Input...");
}
else
{
if(days>0 && days<=5)
{
fine=2*days;
printf("The total fine is --> %d",fine);
}
else if(days>5 && days<=10)
{
fine=(2*5)+(days-5)*4;
printf("The total fine is --> %d",fine);
}
else if(days>10 && days<=30)
{
fine=(2*5)+(4*5)+(days-10)*6;
printf("The total fine is --> %d",fine);
}
else
printf("Membership Cancelled...");
}
}
// program is finished successfully...
