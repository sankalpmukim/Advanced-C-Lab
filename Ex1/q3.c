// Temperature  of  city  in  Fahrenheit  degrees  is  the  input.  Write  a  program  to  convert  the temperature into centigrade degrees.
#include <stdio.h>

int main()
{
    double fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    printf("Temperature in celsius: %lf", ((fahrenheit - 32.0) * 5.0) / 9.0);
}