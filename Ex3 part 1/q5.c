#include <stdio.h>

int main()
{
    int n, arr[100];
    printf("Enter n:  ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }
    printf("Array after swapping:\n");
    printf("[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
}