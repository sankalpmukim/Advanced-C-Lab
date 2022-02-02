// WAP to remove all characters from the given string except the alphabet character and display the final string(without using the second string).
#include <stdio.h>

int main()
{
    char string[200];
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    getchar();
    int i = 0, j = 0;
    while (string[i])
    {
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
        {
            string[j] = string[i];
            j++;
        }
        i++;
    }
    string[j] = '\0';
    printf("%s\n", string);
}