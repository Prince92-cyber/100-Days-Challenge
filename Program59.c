/* Count even and odd numbers in an array...*/
#include <stdio.h>
int main()
{
int n,count_even=0,count_odd=0;
printf("Enter the number of elements you want to enter :");
scanf("%d",&n);
if(n<=0) //Checking the validity of the inputed limit...
{
printf("Invalid Input");
}
else
{
int arr[n]; //Declaration of an Array...
for(int i=0;i<n;i++) // Taking input from user...
{
printf("Enter your element number %d -->",i+1);
scanf("%d",&arr[i]);
}
printf("\nElements of the Array are -\n");
for(int i=0;i<n;i++) //Printing the elements of the Array...
{
printf("%d ",arr[i]);
}
//Now Trying to count the number of odd and even numbers in the array...
for(int j=0;j<n;j++)
{
if(arr[j]%2==0) //Condition for a even number...
{
count_even+=1;
}
else
{
count_odd+=1;
}
}
printf("\nOdd Numbers = %d",count_odd);
printf("\nEven Numbers = %d",count_even);
}
}
//Program is finished successfully...


