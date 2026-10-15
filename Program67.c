/*Insert an element in an array at a given position...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
if(n<=0) //Checking the validity of input...
{
printf("Inavlid Input...");
}
else
{
int arr[n+1]; //Declaration of an Array...
for(int i=0;i<n;i++) //Taking Input from user...
{
printf("Enter your element number %d :",i+1);
scanf("%d",&arr[i]);
}
printf("The elements of the Array are ---\n");
for(int j=0;j<n;j++) //Printing the elements of the Array...
{
printf("%d ",arr[j]);
}
//Now writting the code to perform the desired task...
int data,position;
printf("\nEnter the element that you want to insert :");
scanf("%d",&data);
printf("Enter the position where you want to insert :");
scanf("%d",&position);
// Checking the validity of the position...
if(position < 1 || position > n + 1)
{
printf("\nInvalid Position...");
}
else
{
// Shifting the elements towards the right...
for(int k = n; k >= position; k--)
{
arr[k] = arr[k - 1];
}
// Inserting the new element...
arr[position - 1] = data;
n++; // Increasing the size of the array logically...
// Printing the updated array...
printf("\nThe Array after Insertion is ---\n");
for(int j = 0; j < n; j++)
{
printf("%d ", arr[j]);
}
}
}
}
//Program is finished successfully...