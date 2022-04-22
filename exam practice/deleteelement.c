// write a c program to delete the elements at the given position in an array without using second array by passing the array to a function and display the resultant array in display function.
#include <stdio.h>
#include <stdarg.h>

void delete_element(int *arr, int *n, int pos)
{
    for (int i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void multiple_delete(int *arr, int *n, int num, ...)
{
    va_list valist;
    // delete all elements in valist
    va_start(valist, num);
    for (int i = 0; i < num; i++)
    {
        delete_element(arr, n, va_arg(valist, int));
    }
    va_end(valist);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    display(arr, n);
    multiple_delete(arr, &n, 3, 2, 4, 6);
    printf("After deleting 3 elements: ");
    display(arr, n);
    return 0;
}