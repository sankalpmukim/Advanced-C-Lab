// WAP to split the given sentence into words and display the words one after the other.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *string = (char *)malloc(200);
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    getchar();
    int i = 0, j = 0;
    while (string[i])
    {
        if (string[i] == ' ')
        {
            string[i] = '\0';
            printf("%s\n", string);
            string = string + i + 1;
            i = 0;
        }
        i++;
    }
    string[i] = '\0';
    printf("%s\n", string);
}