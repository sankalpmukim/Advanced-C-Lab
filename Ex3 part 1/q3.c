#include <stdio.h>

// Arranging negative then positive values
int main()
{
    int n, arr[50];
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            continue;
        int temp = i - 1;
        int negative = arr[i];
        while (arr[temp + 1] >= 0 && temp >= 0)
        {
            arr[temp + 1] = arr[temp];
            temp--;
        }
        arr[temp] = negative;
    }
    printf("Final array:\n[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
}