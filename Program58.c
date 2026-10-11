/*Find the maximum and minimum element in an array...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of element you want to enter :");
scanf("%d",&n);
int arr[n]; //Declaration of an array...
for(int i=0;i<n;i++) // taking input from the user...
{
printf("\nEnter your element number %d :",i+1);
scanf("%d",&arr[i]);
}
printf("\nThe elements of the array are --\n");
for(int i=0;i<n;i++) // Printing the elements of the array...
{
printf("%d ",arr[i]);
}
//Using Looping Statements to print the maximum and minimum element of the given array ...
int max_value=arr[0],min_value=arr[0];
for(int i=0;i<n;i++)
{
if(max_value>arr[i])
{
max_value=max_value;
}
else 
{
max_value=arr[i];
}
if(min_value<arr[i])
{
min_value=min_value;
}
else
{
min_value=arr[i];
}
}
printf("\nMaximum Element --> %d",max_value);
printf("\nMinimum Element --> %d",min_value);
}
//Program is finished successfully...