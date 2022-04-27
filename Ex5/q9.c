// Create an enumerated datatype for 12 months and display the values in
// the integer.
#include <stdio.h>

enum months
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    // print all months
    printf("%d\n", JANUARY);
    printf("%d\n", FEBRUARY);
    printf("%d\n", MARCH);
    printf("%d\n", APRIL);
    printf("%d\n", MAY);
    printf("%d\n", JUNE);
    printf("%d\n", JULY);
    printf("%d\n", AUGUST);
    printf("%d\n", SEPTEMBER);
    printf("%d\n", OCTOBER);
    printf("%d\n", NOVEMBER);
    printf("%d\n", DECEMBER);

    return 0;
}