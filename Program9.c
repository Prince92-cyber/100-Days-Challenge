/*Write a program to calculate simple and compound interest for given principal , rate and time*/
#include <stdio.h>
#include <math.h>
int main()
// Main Programming...
{
double p,r,t,si,comp,amt;
int n;
printf("Enter the principal amount :");
scanf("%lf",&p);
printf("\nEnter the rate of interest :");
scanf("%lf",&r);
printf("\nEnter the the time in years :");
scanf("%lf",&t);
printf("Enter the compounding frequency :");
scanf("%d",&n);
if (p<0||r<0||t<0||n<=0)
{
printf("Invalid Input");
return 1;
}
si=(p*r*t)/100;
double a=1+r/(100*n),b=n*t;
amt=p*pow(a,b);
comp=amt-p;
printf("\nThe simple interest for the given data is : %lf",si);
printf("\nThe Compound Interest for the given data is : %lf",comp);
}
// Program is finished successfully...
