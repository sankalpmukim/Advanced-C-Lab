#include <stdio.h>

int main()
{
    char string[200], max_char = '\0', min_char = '\0';
    int max_count = 0, min_count = 201;
    printf("Enter string: ");
    scanf("%[^\n]s", string);
    getchar();
    for (int i = 0; string[i]; i++)
    {
        if (max_char != string[i] || min_count != string[i])
        {
            int count = 0;
            for (int j = 0; string[j]; j++)
            {
                if (string[j] == string[i])
                {
                    count++;
                }
            }
            if (count > max_count)
            {
                max_count = count;
                max_char = string[i];
            }
            if (count < min_count)
            {
                min_count = count;
                min_char = string[i];
            }
        }
    }
    printf("The character that appeared the maximum times is: %c\n", max_char);
    printf("The character that appeared the minimum times is: %c\n", min_char);
}