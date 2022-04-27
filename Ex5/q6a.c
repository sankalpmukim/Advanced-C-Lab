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
#ifdef a
#ifdef b
    printf("The arithmetic mean of %d and %d is %d\n", a, b, (a + b) / 2);
#endif
#endif
}