/* Rotate an array to the right by k positions...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want :");
scanf("%d",&n);
if(n<=0) //Checking the validity of input...
{
printf("Invalid Input...");
}
else
{
int arr[n];
for(int i=0;i<n;i++) //Taking input from user...
{
printf("Enter the element number %d :",i+1);
scanf("%d",&arr[i]);
}
printf("The elements of the Array are ---\n");
for(int j=0;j<n;j++) //Printing the elements of the Array...
{
printf("%d ",arr[j]);
}
//Now writing the code to perform the actual task...
int temp[n]; //Creating a temporary Array...
int k;
printf("\nEnter the position to which you want to rotate the Array :");
scanf("%d",&k);
if(k<=0) //Checking the validity of input...
{
printf("Invalid Input...");
}
else
{
k = k % n;  // Handling k greater than n
// Rotating the array to the right
for(int i = 0; i < n; i++)
{
temp[(i + k) % n] = arr[i];
}
// Copying the rotated elements back to the original array
for(int i = 0; i < n; i++)
{
arr[i] = temp[i];
}
printf("\nArray after rotating to the right by %d positions ---\n", k);

for(int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
}
}
}
//Program is finished successfully...