/*Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than [n / 2] times.
Print -1 if no such element exists.
Note: Majority Element is not necessarily the element that is present most number of times.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements you want to enter :");
	scanf("%d",&n);
	if(n<=0) //Checking the validity of input...
	{
		printf("Invalid Input...");
	}
	else
	{
		int arr[n]; //Declaration of an Array...
		for(int i=0;i<n;i++) //Taking input from user...
		{
			printf("Enter element number %d :",i+1);
			scanf("%d",&arr[i]);
		}
		//Now printing the elements of an Array...
		printf("\nElements of the Array are : \n");
		for(int j=0;j<n;j++)
		{
			printf(" %d",arr[j]);
		}
		printf("\nMajority Elements is :\n");
		int element=0;
		for(int k=0;k<n;k++)
		{
			int count_elements=0;
			for(int l=0;l<n;l++)
			{
				if(arr[k]==arr[l])
				{
					count_elements+=1;
				}
			}
			if(count_elements>(int)(n/2))
			{
				element=arr[k];
				break;
			}
			else
			{
				element=-1;
			}
		}
		printf(" %d",element);
	}
	return 0;
}
//Program is finished successfully...