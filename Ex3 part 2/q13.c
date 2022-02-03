// WAP to reverse words in the given strings and display the reversed string.
// Algorithm:
// 1. Declare a function to reverse the given string.
// 2. Declare a function to reverse all words in the given string.
// 3. Declare a function to reverse the given string and display the reversed string.
// 4. Call the function to reverse the given string.
#include <stdio.h>

void reverse(char *begin, char *end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse words*/
void reverseWords(char *s)
{
    char *word_begin = s;

    // Word boundary
    char *temp = s;

    while (*temp)
    {
        temp++;
        if (*temp == '\0')
        {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ')
        {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    // Reverse the entire string
    reverse(s, temp - 1);
}

// Driver Code
int main()
{
    char s[200];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);
    getchar();
    char *temp = s;
    reverseWords(s);
    printf("%s", s);
    return 0;
}