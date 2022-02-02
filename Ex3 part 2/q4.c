#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char main_quote[] = "Dr. A. P. J. quotes follows....\n";
    char quote1[] = "If you fail, never give up because FAIL means \"First Atetmpt in Learning.\"";
    char quote2[] = "All of us do not have equal talent. But, all of us have an equal opportunity to develop our talents.";
    char quote3[] = "Excellence is a continuous process & not an accident";
    strcat(main_quote, quote1);
    strcat(main_quote, quote2);
    strcat(main_quote, quote3);
    int count = 0;
    for (int i = 0; main_quote[i]; i++)
        if (ispunct(main_quote[i]))
            count++;
    printf("Total number of special characters in APJ's quotes: %d\n", count);
}