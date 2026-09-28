/*Write a program to print numbers from 1 to n...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number till what you want the numbers :");
scanf("%d",&n);
// using Looping Statements to print the numbers (1-n)...
if(n<=0)
{
printf("Invalid Input...");
}
else
{
printf("The required numbers are --");
for (int i=1;i<=n;i++)
{
printf("\n%d",i);
}
}
}
// Program is finished Suceesfully...

 