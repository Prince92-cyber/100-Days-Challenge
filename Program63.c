/* Merge two arrays...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want to enter in first Array:");
scanf("%d",&n);
if(n<=0) //Checking the validity of input...
{
printf("Invalid Input...");
}
else
{
int arr1[n]; //Declaration of an Array...
printf("\nEnter the elements of first Array...\n");
for(int i=0;i<n;i++) //Taking input from the user...
{
printf("Enter the element number %d :",i+1);
scanf("%d",&arr1[i]);
}
printf("\nThe elements of first Array are --\n");
for(int j=0;j<n;j++) //Printing the elements of first Array...
{
printf("%d ",arr1[j]);
}
int n1;
printf("\nEnter the number of elements you want to enter in second Array:");
scanf("%d",&n1);
if(n1<=0) //checking the validity of input...
{
printf("Invalid Input...");
}
else
{
int arr2[n1]; //Declaration of another Array...
for(int i=0;i<n1;i++) //Taking input from user...
{
printf("Enter your element number %d :",i+1);
scanf("%d",&arr2[i]);
}
printf("\nThe elements of second Array are --\n");
for(int j=0;j<n1;j++) //printing the elements of second Array...
{
printf("%d ",arr2[j]);
}
//Now writing the code to merge Two Arrays...
int arr3[n+n1]; //Declaration of an Array to mergee the given two arrays...
for(int i=0;i<n;i++) //Filling the elements of 1st Array in new array...
{
arr3[i]=arr1[i];
}
for(int k=n,l=0;k<(n+n1)&&l<n1;k++,l++) //Filling the elements of second array in new array...
{
arr3[k]=arr2[l];
}
printf("\nAfter Merging the Both Arrays elements of new Array is ---\n");
for(int i=0;i<(n+n1);i++) //Printing the elements of Array after merging...
{
printf("%d ",arr3[i]);
}
}
}
}
//Program is finished successfully...
