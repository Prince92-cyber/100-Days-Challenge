/*Write a program to impliment a basic calculator using switch-case for +,-,*,/,% */
#include <stdio.h>
int main()
{
int num1,num2,var;
printf("Enter your first number :");
scanf("%d",&num1);
printf("Enter your second number :");
scanf("%d",&num2);
printf("Enter 1 if you want to add the given two numbers and 2 for the difference and 3 for the multiplication and 4 for the ratio and 5 for the remainder :");
scanf("%d",&var); 
// Using switch-case for the implimentation of a basic calculator...
if(var!=1 && var!=2 && var!=3 && var!=4 && var!=5)
{
	printf("Invalid Input...");
}
else
{
switch(var)
{
case 1:
{
printf("The Addition of given two numbers is : %d",(num1+num2));
break;
}
case 2:
{
printf("The Difference of given two numbers is : %d",(num1-num2));
break;
}
case 3:
{
printf("The multiplication of the given two numbers is : %d",(num1*num2));
break;
}
case 4:
{
printf("The Ratio of the given two numbers is : %d",(num1/num2));
break;
}
case 5:
{
printf("The Remainder we get by the devision of given numbers is : %d",(num1%num2));
break;
}
}
}
}
// program is finished successfully...
  
 