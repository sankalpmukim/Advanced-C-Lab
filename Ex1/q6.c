// Wind chill factor is the felt air temperature on exposed skin due to wind.  The wind chill temperature  is  always  lower  than  the  air  temperature  and  is  calculated  the  following formula: wcf = 35.74+0.6215t + (0.4275t – 35.75) * v0.16 Where t is the temperature and v is the wind velocity. Write a program to receive values of t and v and calculate wind chill factor.
// wcf = 35.74+0.6215t + (0.4275t – 35.75) * v0.16
#include <stdio.h>
#include <math.h>

int main()
{
    double temperature, wind_velocity;
    printf("Enter temperature: ");
    scanf("%lf", &temperature);
    printf("Enter wind velocity: ");
    scanf("%lf", &wind_velocity);
    double wind_chill_factor = 35.74 + 0.6215 * temperature + (0.4275 * temperature - 35.75) * pow(wind_velocity, 0.16);
    printf("The wind chill factor is: %lf\n", wind_chill_factor);
}