#include <stdio.h>

int main()
{
    printf("Enter the number of characters:");
    int n;
    scanf("%d", &n);
    printf("Enter %d characters:\n", n);
    char arr[50];
    scanf("%c", &arr[0]);
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &(arr[i]));
    }

    printf("Before sorting:\n[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%c, ", arr[i]);
    }
    printf("\n]");
    int min_idx;
    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // swap
        char temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("\nAfter sorting\n[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%c, ", arr[i]);
    }
    printf("\n]\n");
    return 0;
}