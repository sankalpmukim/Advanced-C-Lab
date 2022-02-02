// Write a program that accepts month and date of birth as input and prints the corresponding zodiac sign based on the following table:
#include <stdio.h>

int main()
{
    int date, month;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    // months with 31 days
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Enter date (1-31):");
    }
    else if (month == 2)
    {
        printf("Enter date (1-29):");
    }
    else
    {
        printf("Enter date (1-30):");
    }

    scanf("%d", &date);
    switch (month)
    {
    case 1:
        if (date <= 19)
        {
            printf("Capricorn");
        }
        else
        {
            printf("Aquarius");
        }
        break;
    case 2:
        if (date <= 17)
        {
            printf("Aquarius");
        }
        else
        {
            printf("Pisces");
        }
        break;
    case 3:
        if (date <= 19)
        {
            printf("Pisces");
        }
        else
        {
            printf("Aries");
        }
        break;
    case 4:
        if (date <= 20)
        {
            printf("Aries");
        }
        else
        {
            printf("Taurus");
        }
        break;
    case 5:
        if (date <= 20)
        {
            printf("Taurus");
        }
        else
        {
            printf("Gemini");
        }
        break;
    case 6:
        if (date <= 20)
        {
            printf("Gemini");
        }
        else
        {
            printf("Cancer");
        }
        break;
    case 7:
        if (date <= 22)
        {
            printf("Cancer");
        }
        else
        {
            printf("Leo");
        }
        break;
    case 8:
        if (date <= 22)
        {
            printf("Leo");
        }
        else
        {
            printf("Virgo");
        }
        break;
    case 9:
        if (date <= 22)
        {
            printf("Virgo");
        }
        else
        {
            printf("Libra");
        }
        break;
    case 10:
        if (date <= 22)
        {
            printf("Libra");
        }
        else
        {
            printf("Scorpio");
        }
        break;
    case 11:
        if (date <= 21)
        {
            printf("Scorpio");
        }
        else
        {
            printf("Saggitarius");
        }
        break;
    case 12:
        if (date <= 21)
        {
            printf("Saggitarius");
        }
        else
        {
            printf("Capricorn");
        }
        break;
    default:
        printf("Invalid month");
    }
    printf("\n");
}