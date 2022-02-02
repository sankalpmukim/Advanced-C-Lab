// Write a program to read ten numbers and count number of positive, negative and zero.
#include <stdio.h>

int main()
{
    int number;
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number);
        if (number < 0)
        {
            negative++;
        }
        else if (number > 0)
        {
            positive++;
        }
        else
        {
            zero++;
        }
    }
    printf("Number of positives: %d\n", positive);
    printf("Number of negatives: %d\n", negative);
    printf("Number of zeroes: %d\n", zero);
}