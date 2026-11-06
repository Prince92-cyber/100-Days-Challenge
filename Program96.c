/* Reverse each word in a sentence without changing the word order */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter your sentence: ");
    scanf(" %99[^\n]", str);

    printf("\nProvided string is: %s", str);

    int size = strlen(str);

    printf("\nSize of the provided string is: %d", size);

    int count_words = 0;
    int word_size = 0;

    char word[100];

    // Counting the number of words present in the string
    for (int k = 0; k < size; k++)
    {
        if (str[k] == ' ')
        {
            count_words++;
        }
    }

    count_words = count_words + 1;

    // Extracting and reversing each word
    int position = 0;

    for (int c = 0; c < count_words; c++)
    {
        int i = 0;

        // Skipping extra spaces
        while (str[position] == ' ')
        {
            position++;
        }

        // Extracting one word
        while (str[position] != ' ' && str[position] != '\0')
        {
            word[i] = str[position];
            i++;
            position++;
        }

        // Adding null character
        word[i] = '\0';

        // Calculating the size of the word
        word_size = strlen(word);

        // Reversing the word
        for (int a = 0, b = word_size - 1; a < b; a++, b--)
        {
            char temp = word[a];

            word[a] = word[b];

            word[b] = temp;
        }

        // Printing the reversed word
        printf("\n%s", word);
    }

    return 0;
}
//Program is finished successfully...