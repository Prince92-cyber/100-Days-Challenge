/*Write a program to take an array arr[] of integers as input,
the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1.
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve...*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements you want to enter :");
	scanf("%d",&n);
	if(n<=0)
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
		printf("\nElements of Array formed ...\n");
		for(int j=0;j<n;j++) //Printing the elements of the Array...
		{
			printf(" %d",arr[j]);
		}
		for(int i=0;i<n;i++) //Main Logic...
		{
			int current_element=0 , nxt_great_element=-1;
			current_element=arr[i];
			printf("\nCurrent Element = %d",current_element);
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]>current_element)
				{
					nxt_great_element=arr[j];
					break;
				}
				else
				{
					nxt_great_element=-1;
				}
			}
			printf("\nNext Greater Element of %d is =%d",current_element,nxt_great_element);
		}
	}
	return 0;
}
//Program is finished successfully...