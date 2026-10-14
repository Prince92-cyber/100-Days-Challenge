/*Find the digit that occurs the most times in an integer number...*/
#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
if(n<=0) //Checking the validity of input number...
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
printf("\nThe elements of the given Array are ---\n"); 
for(int j=0;j<n;j++) //Printing all the elements of an Array...
{
printf("%d ",arr[j]);
}
//Now writing the code to find the digit that occurs the most times...
int maxCount = 0;
int mostFrequent;
for(int k = 0; k < n; k++)
{
int count = 0;
for(int l = 0; l < n; l++)
{
if(arr[k] == arr[l])
{
count++;
}
}
if(count > maxCount)
{
maxCount = count;
mostFrequent = arr[k];
}
}
// Printing the result
printf("\n\nThe most frequent element is: %d", mostFrequent);
printf("\nIt occurs %d times.", maxCount);
}
}
//Program is finished successfully...