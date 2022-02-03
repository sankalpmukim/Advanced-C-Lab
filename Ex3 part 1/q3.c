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
    // traverse the array
    for (int i = 0; i < n; i++)
    {
        // if the element is negative
        if (arr[i] > 0)
        {
            // traverse the array again
            for (int j = i + 1; j < n; j++)
            {
                // if the element is positive
                if (arr[j] < 0)
                {
                    // swap
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }
    printf("\nAfter sorting:\n[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
    return 0;
}