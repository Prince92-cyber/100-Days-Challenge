/*Write a program to check whether a number is a palindrome or not...*/
#include <stdio.h>
int main()
{
int num,rem=0,reverse=0;
printf("Enter your number :");
scanf("%d",&num);
int a=num;
//Using Looping Statments...
for(;num>0;num=num/10)
{
rem=num%10; 
reverse=(reverse*10+rem); 
}
printf("The reverse of the given number is --> %d",reverse);
// Using Conditional Statments to check whether the given number is a palindrome or  not...
if (a==reverse)
{
	printf("\nThe given number %d is a palindrome",a);
}
else
{
	printf("\nThe given number %d is not a palindrome",a);
}
}
//Program is finished successfully...

