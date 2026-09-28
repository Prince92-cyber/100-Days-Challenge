/* Creating a C program to find the factorial of a number...*/
#include <stdio.h>
void main()
// Starting to find the facrtorial of a number...
{
int num;
printf("Enter the number for its factorial :");
scanf("%d",&num);
unsigned long long factorial=1;
if (num<0)
{
	printf("Factorial doesn't exist of a negative number...");
}
else
{
// Using looping statements...
for(num;num>=1;--num)
{
factorial*=num;
}
printf("The factorial of given number is : %llu",factorial);
}
}
// Program is finished successfully...



 