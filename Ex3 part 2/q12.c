// WAP to insert a substring anywhere in between the given string except in the first and last position of the string. Finally display the resultant string on inserting the sub-string.
// Algorithm:
// 1. Declare a function to find the length of the given string.
// 2. Take the string from the user.
// 3. Take the substring from the user.
// 4. Take the position from the user.
// 5. Insert the substring into the string by shifting the characters to the right.
// 6. Display the resultant string.
#include <stdio.h>
#include <stdlib.h>

// function to determine length of string
int strlen(char *string)
{
    int i = 0;
    while (string[i])
        i++;
    return i;
}

int main()
{
    char *string = (char *)malloc(200);
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    getchar();
    char sub_string[200];
    printf("Enter a sub-string: ");
    scanf("%[^\n]s", sub_string);
    getchar();
    printf("Enter the position: ");
    int position, k = 0;
    scanf("%d", &position);
    while (string[position] != '\0' && sub_string[k] != '\0')
    {
        int i;
        for (i = strlen(string); i >= position; i--)
        {
            string[i + 1] = string[i];
        }
        string[position] = sub_string[k];
        position++;
        k++;
    }
    printf("Output: %s\n", string);
}