/*Find the sum of array elements...*/
#include <stdio.h>
int main()
{
int n,sum=0;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
int array[n]; // Declaration of an array...
for(int i=0;i<n;i++) // Taking input from the user ...
{
printf("Enter the element number %d :",i+1);
scanf("%d",&array[i]);
}
printf("\nThe Elements of Array are -- \n");
for(int i=0;i<n;i++) // Printing the elements of given array...
{
	printf("%d ",array[i]);
}
for(int i=0;i<n;i++) // Loop to find the sum of given elements of array...
{
sum+=array[i];
}
printf("\nThe sum of all the elements of the array is --> %d",sum);
}
// Program is finished successfully...