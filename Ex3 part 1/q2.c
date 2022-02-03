// WAP to extract odd, even and prime numbers in an array to 3 different arrays and display this array.
#include <stdio.h>

int main()
{
    int arr[100], odds[100], evens[100], primes[100];
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter arr: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int odd_count = 0, even_count = 0, prime_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evens[even_count++] = arr[i];
        }
        else
        {
            odds[odd_count++] = arr[i];
        }
        int flag = 0;
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            primes[prime_count++] = arr[i];
        }
    }
    printf("Odds: ");
    for (int i = 0; i < odd_count; i++)
    {
        printf("%d, ", odds[i]);
    }
    printf("\nEvens: ");
    for (int i = 0; i < even_count; i++)
    {
        printf("%d, ", evens[i]);
    }
    printf("\nPrimes: ");
    for (int i = 0; i < prime_count; i++)
    {
        printf("%d, ", primes[i]);
    }
    printf("\n");
    return 0;
}