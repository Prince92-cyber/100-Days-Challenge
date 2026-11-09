/*Print all substrings of a string...*/
#include <stdio.h>
int main()
{
    char str[100]; // Declaration of a character array...

    printf("Enter a string : ");
    scanf("%99[^\n]", str);

    // Calculating the length of the string...
    int length = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        length++;
        i++;
    }

    if(length == 0) // Checking whether the string is empty...
    {
        printf("Empty String...");
    }
    else
    {
        printf("\nAll possible substrings are :\n");

        // Generating all possible substrings...
        for(int i = 0; i < length; i++)
        {
            for(int j = i; j < length; j++)
            {
                // Printing the substring...
                for(int k = i; k <= j; k++)
                {
                    printf("%c", str[k]);
                }

                printf("\n");
            }
        }
    }

    return 0;
}