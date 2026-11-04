/* Find the longest word in a sentence */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char largest[50];
    char word[50];

    printf("Enter your sentence: ");
    scanf(" %99[^\n]", str);

    printf("\nProvided Sentence is: %s", str);

    // Calculating the size of the sentence
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }

    printf("\nSize of the Sentence = %d", size);

    // Counting words and finding the longest word
    int count_words = 0;
    int word_size = 0;
    int largest_size = 0;

    for (int i = 0; i <= size; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[word_size] = str[i];
            word_size++;
        }
        else
        {
            if (word_size > 0)
            {
                word[word_size] = '\0';
                count_words++;

                if (word_size > largest_size)
                {
                    largest_size = word_size;
                    strcpy(largest, word);
                }

                word_size = 0;
            }
        }
    }

    printf("\nTotal number of words in the given sentence is: %d",
           count_words);

    printf("\nThe longest word in the sentence is: %s", largest);

    printf("\nLength of the longest word is: %d", largest_size);

    return 0;
}