// Write a program in C to replace the spaces of a given string “ARISE, AWAKE, and STOP NOT UNTIL THE GOAL is ACHIEVED” with a special character of your choice.
#include <stdio.h>

int main()
{
    char string[] = "ARISE, AWAKE, and STOP NOT UNTIL THE GOAL is ACHIEVED";
    int i = 0, j = 0;
    while (string[i])
    {
        if (string[i] == ' ')
        {
            string[j] = '$';
            j++;
        }
        else
        {
            string[j] = string[i];
            j++;
        }
        i++;
    }
    string[j] = '\0';
    printf("%s\n", string);
}