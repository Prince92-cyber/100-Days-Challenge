/* Write a program to take an integer array arr and an integer k as inputs.
The task is to find the kth smallest element in the array.
Print the kth smallest element as output...*/
#include<stdio.h>
int main()
{
int n;
printf("Enter the number of elements you want :");
scanf("%d",&n);
if(n<=0) //Checking the validity of input...
{
printf("\nInvalid Input...");
}
else
{
int arr[n]; //Declaration of an Array...
for(int i=0;i<n;i++) //Taking input from user...
{
printf("Enter the element number %d :",i+1);
scanf("%d",&arr[i]);
}
printf("\nElements of the Array formed are :\n");
for(int j=0;j<n;j++) //Printing the elements of the Array...
{
printf(" %d",arr[j]);
}
int k;
printf("\nEnter the integer :");
scanf("%d",&k);
if(k<=0 || k>n) //Checking the validity of k...
{
	printf("Invalid inp[ut for k...");
}
else
{
	int smallest=0;
	printf("\nKth Smallest Element in the Array is :");
	for(int p=0;p<n;p++)
	{
		smallest=arr[p];
		int count=0;
		for(int q=0;q<n;q++)
		{
			if(smallest>arr[q])
			{
				count++;
			}
		}
		if(count==k-1)
		{
			printf(" %d",smallest);
		}
	}
}
}
return 0;
}
//Program is finished successfully...