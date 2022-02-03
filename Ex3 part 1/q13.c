// WAP to carry out Left to Right rotations of a 1-D array n times.
// Algorithm:
// 1. Take the array from the user.
// 2. Take the number of rotations from the user.
// 3. For n rotations,
// 4. Traverse the array and shift the elements to the right.
// 5. Set the last element to 0.
// 6. Display the array.
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