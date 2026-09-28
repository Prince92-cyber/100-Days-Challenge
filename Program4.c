/* Write a program to calculate the area and circumference of a circle given its radius...*/
#include <stdio.h>
void main()
// Main Programming...
{
float radius,area,circum;
printf("Enter the radius of the circle :");
scanf("%f",&radius);
area=(3.14*radius*radius);
circum=(2*3.14*radius);
printf("The Area of circle of radius %f is : %f",radius,area);
printf("\nThe Circumference of circle is : %f",circum);
}
// Program is finished successfully...
