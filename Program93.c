/* Check whether two strings are anagrams of each other... */

#include <stdio.h>

int main()
{
    char str1[50]; // Declaration of a character array...

    printf("Enter your first word :");
    scanf(" %49[^\n]", str1);

    printf("\nProvided first word is : %s", str1);

    // Calculating the size of the first string...
    int size1 = 0;
    int k1 = 0;

    while(str1[k1] != '\0')
    {
        size1++;
        k1++;
    }

    printf("\nSize of provided first word is : %d", size1);

    char str2[50];

    printf("\nEnter your second word :");
    scanf(" %49[^\n]", str2);

    printf("\nProvided second word is : %s", str2);

    // Calculating the size of the second string...
    int size2 = 0;
    int k2 = 0;

    while(str2[k2] != '\0')
    {
        size2++;
        k2++;
    }

    printf("\nSize of provided second word is : %d", size2);

    int count = 0;

    if(size1 != size2)
    {
        printf("\nProvided two strings are not Anagrams...");
    }
    else
    {
        int visited[50] = {0};

        for(int i = 0; i < size1; i++)
        {
            for(int j = 0; j < size2; j++)
            {
                if(str1[i] == str2[j] && visited[j] == 0)
                {
                    count++;
                    visited[j] = 1;
                    break;
                }
            }
        }

        if(count == size1)
        {
            printf("\nProvided two strings are Anagrams...");
        }
        else
        {
            printf("\nProvided two strings are not Anagrams...");
        }
    }

    return 0;
}
//Program is finished successfully...