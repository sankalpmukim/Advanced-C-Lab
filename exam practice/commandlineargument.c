// write a c program using command line arguments to get 5 input numbers and calculate the total number of odd numbers except 5 if it is present in the input.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POSITIVE_OR_NEGATIVE(x) (x > 0)

int main(int argc, char *argv[])
{
    int count = 0;
    for (int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (num % 2 == 1 && num != 5)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}