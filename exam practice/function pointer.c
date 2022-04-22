// Write a c program using function pointer to print the string in lower case or upper case based on user choice.
#include <stdio.h>

char tolowerchar(char c)
{
    return c + 32;
}

char toupperchar(char c)
{
    return c - 32;
}

void to_lowercase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolowerchar(str[i]);
    }
}

void to_uppercase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = toupperchar(str[i]);
    }
}

int main()
{
    void (*fptr[])(char *) = {to_lowercase, to_uppercase};
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter 1 for lowercase, 2 for uppercase: ");
    int choice;
    scanf("%d", &choice);
    (*fptr[choice - 1])(str);
    printf("%s\n", str);
    return 0;
}