/*Write a program to take a number and print its equivalent binary representation...*/
#include <stdio.h>
int main()
{
int num,rem,a,power=1;
printf("Enter the number :");
scanf("%d",&num);
a=num;
// Find the highest power of 2...
for(; a>=2;a=a/2)
{
power=power*2;
}
//Print binary digits from left to right...
for(; power>0;power=power/2)
{
rem=num/power;
printf("%d",rem);
num=num%power;
}
return 0;
}
//Program is finished successfully...

