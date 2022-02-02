// Write a program that receives weight as input and prints out the boxer’s weight class. In boxing the weight class of a boxer is decided as per the following table.
#include <stdio.h>

int main()
{
    printf("Enter boxer's weight: ");
    double weight;
    scanf("%lf", &weight);
    if (weight < 115)
    {
        printf("Fly weight\n");
    }
    else if (weight <= 121)
    {
        printf("Bantam weight\n");
    }
    else if (weight <= 153)
    {
        printf("Feather weight\n");
    }
    else if (weight <= 189)
    {
        printf("Middle weight\n");
    }
    else
    {
        printf("Heavy weight\n");
    }
}