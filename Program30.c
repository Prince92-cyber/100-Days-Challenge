/*Write a program to reverse a given number...*/
#include <stdio.h>
int main()
{
int num,rev=0,rem;
printf("Enter your number :");
scanf("%d",&num);
//Using Looping Statements to get the desired output...
for(; num!=0;num=num/10)
{
	rem = num%10;
	rev=rev*10 + rem;
}
printf("Reverse of the number =%d",rev);
return 0;
}
