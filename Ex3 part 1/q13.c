#include <stdio.h>

int main()
{
    int n, SIZE;
    printf("Enter size of array: ");
    scanf("%d", &SIZE);
    printf("Enter %d elements: ", SIZE);
    int arr[50];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Enter the number of rotations: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int last = arr[SIZE - 1];
        for (int j = SIZE - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
    printf("\n");
    printf("Array after %d left to right rotations:\n[\n\t", n);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
}