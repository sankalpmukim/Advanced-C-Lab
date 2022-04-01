// write a function that compares two given dates
#include <stdio.h>
// to store a date, use a structure that contains the day, month and year

struct date
{
    int day;
    int month;
    int year;
};

// if the dates are equal, return 0 else return 1
int compare_dates(struct date *d1, struct date *d2)
{
    if (d1->day == d2->day && d1->month == d2->month && d1->year == d2->year)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    // equal date case
    struct date d1 = {1, 1, 2000};
    struct date d2 = {1, 1, 2000};
    printf("%d\n", compare_dates(&d1, &d2));
    // not equal date case
    struct date d3 = {1, 1, 2000};
    struct date d4 = {1, 2, 2000};
    printf("%d\n", compare_dates(&d3, &d4));
    return 0;
}