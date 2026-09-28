/*Write a program to find and display the sum of first n natural numbers ...*/
#include <stdio.h>
int main()
// Main Programming...
{
int n,a=1,d=1,sum;
printf("Enter how many first natural numbers sum you want :");
scanf("%d",&n);
sum=(n*(2*a+(n-1)*d))/2;
printf("The sum of first %d natural numbers is : %d",n,sum);
}
// Program is finished successfully... 