/* Search for an element in an array using linear search...*/
#include <stdio.h>
int main()
{
int n,num=0;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
if(n<=0) //Checking the validity of inputed number...
{
printf("Invalid Input !!");
}
else
{
int arr[n]; //Declaration of an Array...
for(int i=0;i<n;i++) //Taking input from the user...
{
printf("Enter your element number %d ---> ",i+1);
scanf("%d",&arr[i]);
}
for(int j=0;j<n;j++) //Printing the elements of an Array...
{
printf("%d ",arr[j]);
}
//Now writing the code to find an element in an array...
printf("\nEnter the element that you want to find :");
scanf("%d",&num);
int temp=0;
for(int k=0;k<n;k++)
{
if(arr[k]==num)
{
temp+=1;
printf("\nElement Found !!");
printf("\nThe given element %d is at %dth position...",num,k+1);
}
}
if(temp==0)
{
printf("\nElement Not Found !!");
}
}
}
//Program is finished successfully...