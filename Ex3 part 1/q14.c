#include <stdio.h>

int main()
{
    char string[1024];
    printf("Enter a string of 0's and 2's: ");
    scanf("%s", string);
    int i = 0, last_zero = 0, count = 0;
    while (string[i])
    {
        if (string[i] == '0')
        {
            last_zero = 1;
            i++;
            continue;
        }
        else if (string[i] == '2' && last_zero)
        {
            last_zero = 0;
            while (string[i] && string[i] == '2')
            {
                i++;
            }
            // making sure loop exited on 0 instead of null
            if (string[i] == '0')
            {
                count++;
                last_zero = 1;
            }
        }
        i++;
    }
    printf("Number of patterns: %d\n", count);
}