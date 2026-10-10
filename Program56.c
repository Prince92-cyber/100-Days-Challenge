/*Read and print elements of a one-dimensional array...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
int array[n]; // Declaration of an Array...
for(int i=0;i<n;i++) // Taking input from the user ...
{
printf("\nEnter your element number %d :",i+1);
scanf("%d",&array[i]);
}
printf("\nThe elements of the array are --\n");
for(int j=0;j<n;j++) // Printing the elements of the array...
{
printf("%d ",array[j]);
}
}
//Program is finished successfully...
