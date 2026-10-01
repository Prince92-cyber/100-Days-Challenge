/*Write a program to find the sum of digits of a number...*/
#include <stdio.h>
int main()
{
int rem,num,digit_sum=0;
printf("Enter your number :");
scanf("%d",&num);
int a=num;
//Using Looping Statements...
for(;num>0;num=num/10)
{
rem=num%10;
digit_sum+=rem;
}
printf("The sum of digits of the given  number %d is : %d",a,digit_sum);
}
// Program is finished successfully...
