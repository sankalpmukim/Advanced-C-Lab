#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    printf("Enter array: \n");
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    int last_non_repeating_element = -1;
    for (int i = 0; i < n; i++)
    {
        int repeating = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                repeating++;
                break;
            }
        }
        if (!repeating)
        {
            int non_repeating = arr[i];
            for (int k = i; k > last_non_repeating_element; k--)
            {
                arr[k] = arr[k - 1];
            }
            arr[++last_non_repeating_element] = non_repeating;
        }
    }
    printf("Non repeating to the left and repeating to the right\n");
    printf("Final array is: \n[\n\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n]\n");
}