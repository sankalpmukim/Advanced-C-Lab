// Write down macro definitions for the following:
// 1. To find the arithmetic mean of two numbers.
// 2. To find the absolute value of a number.
// 3. To convert an uppercase alphabet to lowercase.
// 4. To obtain the bigger of two numbers.
#include <stdio.h>
#include <math.h>
#include <string.h>
#define a 10
#define b 20

int main()
{
#if (a > b)
    printf("%d is bigger than %d\n", a, b);
#elif (a == b)
    printf("%d is equal to %d\n", a, b);
#else
    printf("%d is smaller than %d\n", a, b);
#endif
}