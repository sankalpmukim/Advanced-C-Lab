// A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
// Example: prime factors of 24 are 2, 2, 2 and 3.
#include <stdio.h>

void primeFactors(int num)
{
    int i;
    for (i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    primeFactors(num);
    return 0;
}