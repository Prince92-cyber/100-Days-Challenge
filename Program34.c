/*Write a program to check if a number is prime...*/
#include <stdio.h>
int main()
{
int num,check=1;
printf("Enter your number :");
scanf("%d",&num);
// Using Conditional Statements to check whether the number is prime or not..
if (num<=1)
printf("Can't check whether the number is prime or not...");
else
{
//Using Looping Statements to check whether the given number is prime or not...
for(int t=2;t*t<=num;t++)
{
if (num%t==0)
{
	check=0;
	break;
}
}
if(check==0)
{
	printf("\nEntered number is not a Prime Number...");
}
else{
	printf("\nEntered number is a Prime Number...");
}
}
return 0;
}
//Program is finished successfully...
