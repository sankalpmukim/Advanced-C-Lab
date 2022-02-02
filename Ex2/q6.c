#include <stdio.h>
#include <math.h>

int main()
{
    // User input
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);
    // i) 1+3+5+7+...n
    int i, sum = 0;
    for (i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    printf("1+3+5+7+...n: %d\n", sum);

    // 1+4+25+36....n
    sum = 0;
    i = 1;
    while (pow(i, 2) <= n)
    {
        sum += (int)pow(i, 2);
        i++;
        if (pow(i, 2) <= n)
        {
            sum += (int)pow(i, 2);
            i++;
        }
        i += 2;
    }

    printf("1+4+25+36....n: %d\n", sum);

    // x+x^2/2! +x^3/3!+.....+x^n/n!
    double sumd = 0;
    i = 1;
    printf("Enter value of x: ");
    int x;
    scanf("%d", &x);
    while (i <= n)
    {
        int key = i, j = 1;
        double fact = 1.0;
        do
        {
            fact *= (double)j;
            j++;
        } while (j <= key);

        sumd += pow(x, i) / fact;
        i++;
    }

    printf("x+x^2/2! +x^3/3!+.....+x^n/n!: %lf", sumd);
}