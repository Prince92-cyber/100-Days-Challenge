/*Write a prpogram to find the product of odd digits of a number...*/
#include <stdio.h>
int main()
{
int num,rem,product=1;
printf("Enter your number :");
scanf("%d",&num);
int a=num;
// Using Looping Statements to get the desired ouput...
for(;num>0;num=num/10)
{
rem=num%10; // To get each digit of given number...
if (rem%2!=0) //Checking whether the digit is odd or not...
{
product=product*rem;
}
}
printf("The Product of odd digits of given number %d is --> %d",a,product);
}
//Program is finished successfully...
