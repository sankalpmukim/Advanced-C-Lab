// Write down macro definitions for the following:
// 1. To test whether a character entered is a small case letter or not.
// 2. To test whether a character entered is an upper case letter or not.
// 3. To test whether a character is an alphabet or not. Make use of the
// macros you defined in (1) and (2) above.
#include <stdio.h>
#include <string.h>
#define IS_SMALL_LETTER(c) ((c) >= 'a' && (c) <= 'z')
#define IS_UPPER_LETTER(c) ((c) >= 'A' && (c) <= 'Z')
#define IS_ALPHABET(c) (IS_SMALL_LETTER(c) || IS_UPPER_LETTER(c))

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (IS_ALPHABET(c))
    {
        if (IS_SMALL_LETTER(c))
            printf("%c is a small letter.\n", c);
        else
            printf("%c is an upper letter.\n", c);
    }
    else
        printf("%c is not an alphabet.\n", c);
    return 0;
}