/*Write a program to classify a traingle as Equilateral , Isosceles , or Scalen based on its side length...*/
#include <stdio.h>
int main()
{
int s1,s2,s3;
printf("Enter the first side length of traingle :");
scanf("%d",&s1);
printf("Enter the second side length of traingle :");
scanf("%d",&s2);
printf("Enter the third side length of traingle :");
scanf("%d",&s3);
//Using Conditional statements to classify the traingle...
if(s1+s2<s3 || s1+s3<s2 || s2+s3<s1)
{
printf("The given sides of length %d , %d and %d does not form a valid Traingle...",s1,s2,s3);
}
else 
{
if(s1==s2 && s2==s3 && s1==s3)
{
printf("On the basis of the given sides it is an Equilateral Traingle...");
}
else if((s1==s2 && s2!=s3)||(s2==s3 && s3!=s1)||(s1==s3 && s3!=s2))
{
printf("On the basis of the given sides it is an Isosceles Traingle...");
}
else
{
printf("On the basis of the given sides it is a Scalen Traingle...");
}
}
}
// Program is finished successfully...
