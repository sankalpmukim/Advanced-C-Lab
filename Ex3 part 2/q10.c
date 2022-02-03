// WAP to remove the duplicate characters from the given string, S and print the resultant string, RS (Hint: S <-AabCaBcdEGzYz , RS <-AbCdEGzY)
// Algorithm:
// 1. Declare a function to get lowercase of the given character.
// 2. Declare a function to find out if a character exists in the given string.
// 3. Take string from the user.
// 4. Iterate over the string and check if the character exists in the string or not.
// 5. If the character exists, then skip the character.
// 6. Else place the character in the resultant string.
// 7. Place a null character at the end of the string.
// 8. Display the resultant string.
#include <stdio.h>

char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    else
        return c;
}

int charInArray(char c, char *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (toLower(c) == toLower(array[i]))
            return 1;
    }
    return 0;
}

int main()
{
    char string[200];
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    getchar();
    char result_string[200];
    int length = 0;
    int i = 0;
    while (string[i])
    {
        if (charInArray(string[i], result_string, length))
        {
            i++;
            continue;
        }
        result_string[length] = string[i];
        length++;
        i++;
    }
    result_string[length] = '\0';
    printf("%s\n", result_string);
}