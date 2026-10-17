/*Find the sum of each row of a matrix and store it in an Array...*/
#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows you want :");
    scanf("%d",&n);
    printf("Enter the number of columns you want :");
    scanf("%d",&m);
    if(n<=0 || m<=0) //Checking the validity of input...
    {
        printf("Inavlid Input...");
    }
    else
    {
        int matrix[n][m]; //Declaration of an Array...
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                    {
                        printf("Enter your element at the position (%d,%d) :",i,j);
                        scanf("%d",&matrix[i][j]);
                    }
            }
        printf("\nMatrix Formed ...\n");
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                    {
                        printf("%d ",matrix[i][j]);
                    }
                printf("\n");
            }
        //Now writing the code to print the sum of all the elements of a ray and store it in an array...
        int sum_rows=0;
        int arr[n];
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                    {
                      sum_rows+=matrix[i][j];  
                    }
                arr[i]=sum_rows;
                sum_rows=0;
            }
        printf("\nThe ARRAY formed containing the sum of all the rows is ---\n");
        for(int i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
            }
}
//Program is finished successfully...
