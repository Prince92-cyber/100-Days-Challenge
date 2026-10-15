/*Delete an element from an array...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
if(n<=0) //Checking the validoity of input...
{
printf("Inavlid Input...");
}
else
{
int arr[n]; //Declaration of an Array...
for(int i=0;i<n;i++) //Taking input from user...
{
printf("Enter the element number %d :",i+1);
scanf("%d",&arr[i]);
}
printf("Original Array...\n");
for(int j=0;j<n;j++) //Printing the elements of an Array...
{
printf("%d ",arr[j]);
}
//Now writing the code perform the desired task...
int data, found = 0;
printf("\nEnter the element that you want to delete :");
scanf("%d", &data);
for(int k = 0; k < n; k++)
{
if(arr[k] == data)
{
// Shifting the elements towards the left...
for(int j = k; j < n - 1; j++)
{
arr[j] = arr[j + 1];
}
n--; // Decreasing the logical size of the array...
found = 1;
break; // Deleting only the first occurrence...
}
}
if(found == 0)
{
printf("\nElement not found in the Array...");
}
else
{
printf("\nArray after Deletion...\n");
for(int j = 0; j < n; j++)
{
printf("%d ", arr[j]);
}
}
}
}
//Program is finished successfully...