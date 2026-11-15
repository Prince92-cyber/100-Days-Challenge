/* Find the first and last occurrence of a target element in a sorted array... */

#include <stdio.h>

int main()
{
    int n, target;

    printf("Enter the number of elements you want :");
    scanf("%d", &n);

    if(n <= 0) // Checking the validity of input...
    {
        printf("Invalid Input...");
    }
    else
    {
        int nums[n]; // Declaration of an array...

        // Taking input from the user...
        printf("Enter the elements of the sorted array in ascending order :\n");

        for(int i = 0; i < n; i++)
        {
            printf("Enter element %d :", i + 1);
            scanf("%d", &nums[i]);
        }

        printf("\nEnter the target element :");
        scanf("%d", &target);

        // Initializing variables...
        int first = -1, last = -1;

        // Finding the first and last occurrence...
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == target)
            {
                if(first == -1)
                {
                    first = i;
                }

                last = i;
            }
        }

        // Printing the result...
        if(first == -1)
        {
            printf("\nTarget element is not present in the array...");
            printf("\nFirst and Last Occurrence : -1, -1");
            printf("\nFirst and Last Index : -1, -1");
        }
        else
        {
            printf("\nFirst Occurrence of %d : %d", target, nums[first]);
            printf("\nLast Occurrence of %d : %d", target, nums[last]);

            printf("\nFirst Occurrence Index : %d", first);
            printf("\nLast Occurrence Index : %d", last);
        }
    }

    return 0;
}
//Program is finished successfully...