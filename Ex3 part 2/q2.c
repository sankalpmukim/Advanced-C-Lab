#include <stdio.h>

int main()
{
    char string[200], reveresed[200];
    printf("Enter string to reverse: ");
    scanf("%[^\n]s", string);
    getchar();
    int length;
    for (length = 0; string[length]; length++)
        ;
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        reveresed[j] = string[i];
    }
    reveresed[length] = '\0';
    printf("Reversed string: %s\n", reveresed);
}