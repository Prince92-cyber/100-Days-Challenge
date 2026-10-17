/*Read and print a Matrix...*/
#include <stdio.h>
int main()
{
	int n,m;
	printf("Enter the number of rows you want :");
	scanf("%d",&n);
	printf("Enter the number of columns you want :");
	scanf("%d",&m);
	if(n<=0 || m<=0) // Checking the validity of input...
	{
		printf("Invalid Input...");
	}
	else
	{
		int matrix[n][m]; // Declaration of a 2-dimensional Array...
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("Enter your element at the position (%d,%d) :",i,j);
				scanf("%d",&matrix[i][j]);
			}
		}
		printf("\nMatrix Formed...\n");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("%d ",matrix[i][j]);
			}
			printf("\n");
		}
	}
}
//Program is finished successfully...
