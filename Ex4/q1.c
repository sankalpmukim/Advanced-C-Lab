// Write a recursive function to convert any given year into its roman equivalent. Use these roman equivalents for decimal values:
// 1 = I, 5 = V, 10 = X, 50 = L, 100 = C, 500 = D, 1000 = M.
#include <stdio.h>

void convertToRoman(int year, char *roman, int length)
{
    if (year > 1000)
    {
        roman[length] = 'M';
        length++;
        year -= 1000;
        convertToRoman(year, roman, length);
    }
    else if (year > 500)
    {
        roman[length] = 'D';
        length++;
        year -= 500;
        convertToRoman(year, roman, length);
    }
    else if (year > 100)
    {
        roman[length] = 'C';
        length++;
        year -= 100;
        convertToRoman(year, roman, length);
    }
    else if (year > 50)
    {
        roman[length] = 'L';
        length++;
        year -= 50;
        convertToRoman(year, roman, length);
    }
    else if (year > 10)
    {
        roman[length] = 'X';
        length++;
        year -= 10;
        convertToRoman(year, roman, length);
    }
    else if (year > 5)
    {
        roman[length] = 'V';
        length++;
        year -= 5;
        convertToRoman(year, roman, length);
    }
    else if (year > 1)
    {
        roman[length] = 'I';
        length++;
        year -= 1;
        convertToRoman(year, roman, length);
    }
    else if (year == 1)
    {
        roman[length] = 'I';
        length++;
    }
    else if (year == 5)
    {
        roman[length] = 'V';
        length++;
    }
    else if (year == 10)
    {
        roman[length] = 'X';
        length++;
    }
    else if (year == 50)
    {
        roman[length] = 'L';
        length++;
    }
    else if (year == 100)
    {
        roman[length] = 'C';
        length++;
    }
    else if (year == 500)
    {
        roman[length] = 'D';
        length++;
    }
    else if (year == 1000)
    {
        roman[length] = 'M';
        length++;
    }
    else if (year == 0)
    {
        roman[length] = '\0';
    }
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    char roman[100];
    convertToRoman(year, roman, 0);
    printf("%s\n", roman);
    return 0;
}