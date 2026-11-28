/*Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs.
The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target.
Assume exactly one solution exists and return the indices in any order.
Print the two indices separated by a space as output.
If no solution exists, print "-1 -1".*/
#include<stdio.h>
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
		int nums[n]; //Declaration of an Array...
		for(int i=0;i<n;i++) //	Taking input from user...
		{
			printf("Enter the positive element number %d :",i+1);
			scanf("%d",&nums[i]);
			if(nums[i]<=0)
			{
				printf("Invalid Input !!!");
				break;
			}
		}
		printf("\nElements of the Array formed are : \n");
		for(int j=0;j<n;j++) //Printing the elements of the Array...
		{
			printf(" %d",nums[j]);
		}
		int target;
		printf("\nEnter the integer :");
		scanf("%d",&target);
		int first_index=-1,second_index=-1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(nums[i]+nums[j]==target)
				{
					first_index=i;
					second_index=j;
					break;
				}
			}
		}
		printf("\nTwo indices are : (%d , %d)",first_index,second_index);	
	}
	return 0;
}
//Program is finished successfully...