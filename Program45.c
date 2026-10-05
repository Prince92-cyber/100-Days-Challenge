/* Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms...*/
#include <stdio.h>
int main()
{
int n,a=0;
float sum=0;
printf("Enter the number of terms sum you want :");
scanf("%d",&n);
// Using Conditional Statements to check the validity of the inputed number...
if(n<=0)
{
printf("Invalid Input Please enter a valid Integer...");
}
else
{
//Using Looping Statements to get the desired output...
for(int i=1;i<=n;i++)
{
sum+=((float)(2*i)/(i*3+a));
a++;
}
printf("\nThe sum of the series 2/3 + 4/7 + 6/11 + 8/15 +... up to given %d terms is ---> %f",n,sum);
}
}
// Program is finished successfully...


