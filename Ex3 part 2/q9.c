// Write a program to find the number of times a given word "the" appears in the given string "Best brain  of the nation may be found in the last benches of the classroom".
// Algorithm:
// 1. Define the string.
// 2. Traverse the string.
// 3. If a character is a space, then check if the word "the" is present or not.
// 4. If the word "the" is present, then increment the count.
// 5. Else skip the character.
// 6. Display the count.
#include <stdio.h>

int main()
{
    char string[] = "Best brain  of the nation may be found in the last benches of the classroom";
    int i = 0, j = 0, count = 0;
    while (string[i])
    {
        if (string[i] == ' ')
        {
            j = i + 1;
            while (string[j] == ' ')
                j++;
            if (string[j] == 't' && string[j + 1] == 'h' && string[j + 2] == 'e')
                count++;
        }
        i++;
    }
    printf("%d\n", count);
}