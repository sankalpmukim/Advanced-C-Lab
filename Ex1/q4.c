// The length and breadth of a rectangle and radius of a circle are the inputs.Write a program to calculate the area and perimeter of the rectangle and the area and circumference of the circle.
#include <stdio.h>

int main()
{
    double length, breadth, radius;
    printf("Enter the length and breadth of a rectangle and radius of a circle: \n");
    scanf("%lf", &length);
    scanf("%lf", &breadth);
    scanf("%lf", &radius);
    printf("Area of the rectangle: %lf\n", length * breadth);
    printf("Area of the circle: %lf\n", radius * radius * 3.14159);
    printf("Perimeter of the rectangle: %lf\n", 2 * length * breadth);
    printf("Perimeter of the circle: %lf\n", radius * 2 * 3.14159);
}