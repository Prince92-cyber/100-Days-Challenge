/*Write a program to print all the factors of a number...*/
#include <stdio.h>
int main()
// Main Programming...
{
int num;
int factor=1;
printf("Enter your number :");
scanf("%d",&num);
// Condition for the validity of entered number...
if(num<=0)
{
	printf("\nEntered number is not valid can't recognise its factors...");
}
else
{
// Using Looping Statements to get the factors of a given number...
for(int i=1;i<=num;i++)
{
if(num%i==0)
{
factor=i;
printf("\nThe factors of the given number is : %d",factor);
}
}
}
}
// Program is finished successfully...



