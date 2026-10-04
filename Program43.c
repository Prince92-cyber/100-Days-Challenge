/*Write a program to check if a number is a strong number...*/
#include <stdio.h>
int main()
{
// Main Programming...
int num,digit,factorial=1,factorial_sum=0;
printf("Enter your number :");
scanf("%d",&num);
if(num<0) // Checking the validity of the input...
{
printf("\nInavlid Input Please enter only positive integers...");
}
else
{
int temp=num;
// Using Looping Statements to get the desired ouput...
for(temp;temp>0;temp=temp/10)
{
digit=temp%10;
factorial = 1;  // Reset factorial for every digit...
for(int i=1;i<=digit;i++) // Loop to calculate the factorial of individual digits...
{
factorial=factorial*i;
}
factorial_sum=(factorial_sum+factorial);
}
if(factorial_sum==num) // Condition for thee given number is a Strong Number...
{
printf("\nEntered Number is a Strong Number...");
}
else if(factorial_sum!=num) // Condition for the given  number is not a strong number...
{
printf("\nEntered Number is not a Strong Number...");
}
}
}
//Program is finished successfully...
