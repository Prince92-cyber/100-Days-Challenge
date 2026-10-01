/*Write a program to find the LCM of two numbers...*/
#include <stdio.h>
int main()
{
int num1,num2,LCM=1,HCF=1;
printf("Enter your first number :");
scanf("%d",&num1);
printf("Enter your second number :");
scanf("%d",&num2);
//Using Looping Statements to get the desired output...
if (num1<0 || num2<0)
{
	printf("Invalid Input !!");
}
else if(num1>=0 && num2>=0)
{
for(int i=1;i<=num1 && i<=num2;i++)
{
if (num1%i ==0 && num2%i ==0)
{
HCF =i;
}
}
printf("\nHCF of %d and %d is --> %d ",num1,num2,HCF);
// Now calculating the LCM of given numbers...
LCM=(num1*num2)/HCF;
printf("\nLCM of %d and %d is --> %d",num1,num2,LCM);
}
}
//Program is finished successfully...


