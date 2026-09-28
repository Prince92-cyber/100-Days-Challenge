/*Write a program to find the roots of a quadratic equation and categorize them...*/
#include <stdio.h>
#include <math.h>
int main()
{
double x1,x2,D;
int eq_a,eq_b,eq_c;
printf("Enter your Quadrattic Equation Coefficients a,b,c of the form ax^2+bx+c = 0 --> ");
scanf("%d %d %d",&eq_a,&eq_b,&eq_c); // Quadratic Formula used to calculate the roots...
double a=(eq_b*eq_b)-(4*eq_a*eq_c); // Quadratic Formula used to calculate the roots...
x1=(-eq_b+sqrt(a))/(2*eq_a);
x2=(-eq_b-sqrt(a))/(2*eq_a);
// Applying condition to categorize the roots of Quadratic Equation...
D=eq_b*eq_b-(4*eq_a*eq_c);
if (D==0)
{
printf("The given Quadratic Equation will have two real and equal roots : x1 = %lf , x2 = %lf",x1,x2);
}
else if (D>0)
{
printf("The given Quadratic Equation will have two real and distinct roots : x1 = %lf , x2 = %lf",x1,x2);
}
else
{
printf("The given Quadratic Equation will have two imaginary roots : x1 = %lf , x2 = %lf",x1,x2);
}
}
// Program is finished successfully...



