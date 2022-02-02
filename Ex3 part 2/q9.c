// Write a program to find the number of times a given word "the" appears in the given string "Best brain  of the nation may be found in the last benches of the classroom".
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