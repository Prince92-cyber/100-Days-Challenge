/*Write a program to convert temperature from Celsius to Fahrenheit...*/
#include <stdio.h>
void main()
// Main Programming....
{
float temp1,temp2; // temp1 --> Celsius and temp2 --> Fahrenheit
printf("Enter the temperature in Celsius :");
scanf("%f",&temp1);
temp2=((temp1*9/5)+32);
printf("The temperature conversion of %f celsius to fahrenheit is : %f",temp1,temp2);
}
// Program is finished successfully...
