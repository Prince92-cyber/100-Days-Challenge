/* Find the first repeating lowercase alphabet in a string... */

#include <stdio.h>

int main()
{
    char str[50]; // Declaration of a character array...

    printf("Enter your string :");
    scanf("%49[^\n]", str);

    printf("\nProvided string is : %s", str);

    // Calculating the size of the provided string...
    int size = 0;
    int k = 0;

    while (str[k] != '\0')
    {
        size++;
        k++;
    }

    printf("\nSize of the given string is : %d", size);

    char a;
    int count;
    int found = 0;

    // Searching for the first repeating lowercase alphabet...
    for (int i = 0; i < size; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count = 0;

            // Counting the occurrences of the current alphabet...
            for (int j = 0; j < size; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                }
            }

            // Checking whether the alphabet is repeating...
            if (count > 1)
            {
                a = str[i];
                found = 1;
                break;
            }
        }
    }

    if (found == 1)
    {
        printf("\nFirst repeating lowercase alphabet is : %c", a);
        printf("\nFrequency of the repeating alphabet is : %d", count);
    }
    else
    {
        printf("\nNo repeating lowercase alphabet found.");
    }

    return 0;
}

// Program is finished successfully...