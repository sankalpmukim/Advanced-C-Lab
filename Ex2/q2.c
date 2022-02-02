// Write a program to receive value of an angle in degrees and check whether sum of squares of sin and cosine of this angle is equal to 1.
#include <stdio.h>
#include <math.h>

int main()
{
    double degrees;
    printf("Enter angle in degrees");
    scanf("%lf", &degrees);
    // Convert degrees to radians
    double radians = (degrees * M_PI) / 180.0;
    double sine_value = sin(radians) * sin(radians);
    double cosine_value = cos(radians) * cos(radians);
    printf("sine_value = %lf\n", sine_value);
    printf("cosine_value = %lf\n", cosine_value);
    printf("Total value = %lf\n", sine_value + cosine_value);
    if (sine_value + cosine_value == 1.0)
    {
        printf("Therefore sin^2 x + cos^2 x = 1 is proven.");
    }
}