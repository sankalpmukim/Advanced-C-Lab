// WAP to find all the patterns of 0(2+)0 in a given string. Given a string containing 0’s and 2’s. Find the total number of 0(2+)0 patterns in the string and output it.
// Algorithm:
// 1. Take string from the user.
// 2. Declare a variable to store the count of 0(2+)0 patterns.
// 3. Traverse the string.
// 4. If the character is 0, then continue.
// 5. Else if the character is 2, and if the last character is a 0, then
// 6. Keep traversing the string and check if the next character is 0 or 2.
// 7. If the next character is 0, then increment the count and set last_zero to 1.
// 8. Else if the next character is 2, then continue.
// 9. Display the count.
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