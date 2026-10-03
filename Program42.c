/*Write a program to check if a number is a perfect number...*/
#include <stdio.h>
int main()
{
// Main Programming...
int  num,sum=0;
printf("Enter your number :");
scanf("%d",&num);
// Using Looping statements to get those number who divide the given  number properly...
for(int i=1;i<num;i++)
{
if (num%i==0) //Checking whether the number devides the given number properly or not...
{
sum+=i; // Adding all the perfect divisors of the given number...
}
}
// Condition for having a perfect number...
if(sum==num)
{
printf("\nThe entered number is a Perfect Number !!");
}
else
{
printf("\nThe entered number is not a Perfect Number !!");
}
}
// Program is finished successfully...