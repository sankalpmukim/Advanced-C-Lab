// Write down macro definitions for the following:
// 1. To find the arithmetic mean of two numbers.
// 2. To find the absolute value of a number.
// 3. To convert an uppercase alphabet to lowercase.
// 4. To obtain the bigger of two numbers.
#include <stdio.h>
#include <math.h>
#include <string.h>
#define a -12

int main()
{
#if (a >= 0)
    printf("The absolute value is: %d", a);
#else
    printf("The absolute value is: %d", a * -1);
#endif
}