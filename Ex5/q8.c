// Create an enumerated data type logical with TRUE and FALSE values.
// write a program to check whether the entered number is prime or not
// prime. if the number is prime display 0 otherwise 1. use enumerated
// datatype
#include <stdio.h>
#include <string.h>

enum boolean
{
    FALSE,
    TRUE
};

enum boolean isPrime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return FALSE;
    }
    return TRUE;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n) == TRUE)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}