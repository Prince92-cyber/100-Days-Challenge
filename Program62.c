/*Reverse an array without taking extra space...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
if(n<=0) //Checking the validity of input...
{
printf("Invalid Input...");
}
else
{
int arr[n]; //Declaration of an Array...
for(int i=0;i<n;i++) //Taking input from user...
{
printf("Enter your element number %d :",i+1);
scanf("%d",&arr[i]);
}
printf("\nThe elements of the Array are --\n");
for(int j=0;j<n;j++) //Printing the elements of an Array...
{
printf("%d ",arr[j]);
}
//Now Writing the code to print the Array in reverse order...
int arr1[n]; //Delaration of another array...
for(int k=0;k<n;k++)
{
arr1[k]=arr[n-1-k];
}
printf("\nThe reverse of the given Array is --\n");
for(int l=0;l<n;l++) //Printing the Array in reverse order...
{
printf("%d ",arr1[l]);
}
}
}
//Program is finished successfully...
