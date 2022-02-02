// Write a C program to count the number of words, number of sentences and finally the length of the string without using any built- in functions of strings.
#include <stdio.h>

int main()
{
    int words = 0, sentences = 0, length;
    char string[200];
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    getchar();
    // length
    for (length = 0; string[length]; length++)
        ;
    // words and sentences
    int i = 0, sentence_start = 0, word_start = 0;
    while (string[i])
    {
        if (string[i] == ' ')
        {
            word_start = i + 1;
            words++;
        }
        if (string[i] == '.' || string[i] == '!' || string[i] == '?')
        {
            sentences++;
            sentence_start = i + 1;
        }
        i++;
    }
    printf("Words: %d\nSentences: %d\nLength: %d\n", words, sentences, length);
}