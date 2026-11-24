/*Write a Program to take an integer array nums.
Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer...*/
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
		int nums[n]; //Declaration of an Array...
		for(int i=0;i<n;i++) //Taking input from user...
		{
			printf("Enter element number %d :",i+1);
			scanf("%d",&nums[i]);
		}
		printf("\nElements of Array formed are :\n");
		for(int j=0;j<n;j++) //Printing all the elements of the Array...
		{
			printf(" %d",nums[j]);
		}
		//Now main Program...
		int answer[n]; //Declaration of an Array...
		for(int i=0;i<n;i++)
		{
			int element_product=1;
			for(int j=0;j<n;j++)
			{
				if(i!=j)
				{
					element_product*=nums[j];
				}
				else
				{
					continue;
				}
			}
			answer[i]=element_product;
		}
		printf("\nRequired Array Elements are :\n");
		for(int k=0;k<n;k++)
		{
			printf(" %d",answer[k]);
		}
	}
	return 0;
}
//Program is finished successfully...