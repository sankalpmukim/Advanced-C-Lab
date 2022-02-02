#include <stdio.h>

int main()
{
    int arr[100] = {10, 20, 30};
    int SIZE = 3;
    int i, j;
    printf("Array to start with:\n[\n\t");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
    printf("Enter number to add to beginning of array: ");
    int num;
    scanf("%d", &num);
    for (i = SIZE; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
    SIZE++;
    printf("After adding %d to beginning of array:\n[\n\t", num);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
    printf("Enter element index to add to array: ");
    int index, element;
    scanf("%d", &index);
    printf("Enter element to add to array: ");
    scanf("%d", &element);
    for (int i = SIZE; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
    SIZE++;
    printf("After adding %d to middle of array:\n[\n\t", element);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
    printf("Enter element to add to end of array: ");
    scanf("%d", &arr[SIZE++]);
    printf("After adding element to end of array:\n[\n\t");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
}