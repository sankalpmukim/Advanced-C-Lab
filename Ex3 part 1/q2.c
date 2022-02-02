#include <stdio.h>

int main()
{
    int arr[100], positives[100], negatives[100], primes[100];
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter arr: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int positive_size = 0, negative_size = 0, primes_size = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positives[positive_size++] = arr[i];
        }
        else
        {
            negatives[negative_size++] = arr[i];
        }
        int prime = 1;
        for (int j = 2; j < arr[i] / 2 + 1; j++)
        {
            if (arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime && arr[i] > 1)
        {
            primes[primes_size++] = arr[i];
        }
    }

    printf("Positive numbers are: \n");
    printf("[\n\t");
    for (int i = 0; i < positive_size; i++)
    {
        printf("%d, ", positives[i]);
    }
    printf("\n]\n");
    printf("Negative numbers are: \n");
    printf("[\n\t");
    for (int i = 0; i < negative_size; i++)
    {
        printf("%d, ", negatives[i]);
    }
    printf("\n]\n");
    printf("Prime numbers are: \n");
    printf("[\n\t");
    for (int i = 0; i < primes_size; i++)
    {
        printf("%d, ", primes[i]);
    }
    printf("\n]\n");
}