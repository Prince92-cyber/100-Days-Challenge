/*Program to Find the Leftmost Pivot Index of an Array*/
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
        int arr[n]; //Declaration of an array...

        for(int i=0;i<n;i++) //Taking input from user...
        {
            printf("Enter your element %d :",i+1);
            scanf("%d",&arr[i]);
        }

        long long Left_sum=0;
        long long Right_sum=0;
        int pivot_index=-1;

        //Calculating the total sum of the array...
        for(int i=0;i<n;i++)
        {
            Right_sum+=arr[i];
        }

        //Finding the pivot index...
        for(int k=0;k<n;k++)
        {
            Right_sum-=arr[k];

            if(Left_sum==Right_sum)
            {
                pivot_index=k;
                break;
            }

            Left_sum+=arr[k];
        }

        printf("\nPivot Index of the provided Array is : %d",pivot_index);
    }

    return 0;
}

//Program is finished successfully...