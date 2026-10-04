/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms..*/
#include <stdio.h>
int main()
{
float series_sum=1;
// Given series is 1+3/4+5/6+7/8+ ... up to n terms...
int n;
printf("Enter the number of terms sum you want :");
scanf("%d",&n);
if(n<=0) // Checking the validity of the number entered by the user...
{
printf("Invalid Input Please input a valid Integer...");
}
else
{
// Using Looping Statements to get the desired output...
for(int i=2;i<=n;i++)
{
series_sum=series_sum+((float)(i+(i-1))/(i+(i-1)+1));
}
printf("\nThe sum of series -> 1 + 3/4 + 5/6 + 7/8 + ... up to %d terms is ---> %f",n,series_sum);
}
}
// Program is finished successfully...