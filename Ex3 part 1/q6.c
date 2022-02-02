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

    printf("Inputted array:\n[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%c, ", arr[i]);
    }
    printf("\n]\n");

    printf("Enter the element to search and replace: ");
    char ch;
    scanf("%c", &ch);
    scanf("%c", &ch);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ch)
        {
            arr[i] = '*';
        }
    }
    printf("Output array:\n[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%c, ", arr[i]);
    }
    printf("\n]\n");
    return 0;
}