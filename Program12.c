/*Write a program to input an integer and check whether it is positive , negative or zero using nested if-else*/
#include <stdio.h>
int main()
{
int num;
printf("Enter your number :");
scanf("%d",&num);
// Using conditional statements to check whether the number is positive , negative or zero...
if (num>0)
{
printf("Entered number is positive...");
}
else if (num==0)
{
printf("Entered number is zero...");
}
else if(num<0)
{
printf("Entered number is negative...");
}
}
// Program is finished succesfully...

