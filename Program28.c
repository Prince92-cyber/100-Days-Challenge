/*Write a program to print the product of even numbers from 1 to n...8*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number till you want the multiplication of even numbers :");
scanf("%d",&n);
// Using Looping Statements to get desired output...
if(n<=0)
{
printf("Invalid Input...");
}
else
{
unsigned long long product=1;
for(int t=2;t<=n;t)
{
product=product*t;
t=t+2;
}
printf("The Product of even numbers from 1 to %d is : %llu",n,product);
}
}
// Program is finished successfully...


