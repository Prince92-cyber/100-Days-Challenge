/* Find the second largest element in an array...*/
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
printf("Enter your element number %d :",i+1);
scanf("%d",&arr[i]);
}
printf("\nThe elements of the Array are ---\n");
for(int j=0;j<n;j++) //Printing the elements of the Array...
{
printf("%d ",arr[j]);
}
//Now writing the code to print the second largest element of the Array...
int largest=arr[0],second_largest;
for(int k=0;k<n;k++) //Getting the second largest element of the Array...
{
if(arr[k]>largest)
{
second_largest=largest;
largest=arr[k];
}
}
printf("\nLargest Element = %d",largest);
printf("\nSecond Largest Element =%d",second_largest);
}
}
//Program is finished successfully..