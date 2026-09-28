/*Write a program to print the sum of first odd numbers from 1 to n...*/
#include <stdio.h>
int main()
{
int n,sum;
printf("Enter the number till you want to get the sum of all odd numbers :");
scanf("%d",&n);
//Using Conditional Statements to get the desired output...
for (int i=1;i<=n;i)
{
sum+=i;
i=i+2;
}
printf("The sum of first odd numbers from 1 to %d is : %d",n,sum);
}
// program is finished successfully...
