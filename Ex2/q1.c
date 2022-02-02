#include <stdio.h>

int main()
{
    int arr[3];
    printf("Enter 3 sides of the triangle:\n");
    scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
    // Finding the largest side
    int largest = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    // Summing the other 2 sides of the triangle
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i != largest)
        {
            sum += arr[i];
        }
    }
    // Checking sum vs largest side
    if (sum > arr[largest])
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }
}
