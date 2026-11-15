/* Find the index of the ceil of a given element in a sorted array... */

#include <stdio.h>

int main()
{
    int n, x;

    printf("Enter the number of elements you want :");
    scanf("%d", &n);

    if(n <= 0) // Checking the validity of input...
    {
        printf("Invalid Input...");
    }
    else
    {
        int arr[n]; // Declaration of an array...

        // Taking input from the user...
        printf("Enter the elements of the sorted array in ascending order :\n");

        for(int i = 0; i < n; i++)
        {
            printf("Enter element %d :", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("\nEnter the value of x :");
        scanf("%d", &x);

        // Initializing a variable...
        int ceil = -1;

        // Finding the index of the ceil...
        for(int i = 0; i < n; i++)
        {
            if(arr[i] >= x)
            {
                ceil = i;
                break;
            }
        }

        // Printing the result...
        if(ceil == -1)
        {
            printf("\nCeil of %d does not exist in the array...", x);
            printf("\nIndex : -1");
        }
        else
        {
            printf("\nCeil of %d is : %d", x, arr[ceil]);
            printf("\nIndex of ceil : %d", ceil);
        }
    }

    return 0;
}
//Program is finished successfully...