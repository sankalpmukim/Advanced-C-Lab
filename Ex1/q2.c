// The distance between two cities (in km.) is the input. Write a program to convert and print the distance in meters, feet, inches and centimeters.
#include <stdio.h>

int main()
{
    double km;
    printf("Enter km: ");
    scanf("%lf", &km);
    printf("\n");
    printf("In meters: %lf\n", km * 1000.0);
    printf("In feet: %lf\n", km * 3280.84);
    printf("In inches: %lf\n", km * 39370.1);
    printf("In centimeters: %lf\n", km * 100000.0);
}