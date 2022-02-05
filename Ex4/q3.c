// Write a program and the following functions to compute the average rainfall for the year. Use an array to store pointers to the first day of each month and another array to store the number of days in each month.
// a. A function to input the average rainfall data of each day of the year into a one dimensional
// array.
// b. A function to compute the average rainfall for the year or any month.
// c. A function to output the average rainfall for each month and the yearly average rainfall.
#include <stdio.h>
#include <stdlib.h>

double **inputRainfall();
double averageRainfall(double **rainfall);
double averageRainfallByMonth(double **rainfall, int month);
void outputRainfall(double **rainfall);

// array to store the number of days in each month
int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    double **rainfall = inputRainfall();
    outputRainfall(rainfall);
    return 0;
}

// input all rainfall month by month
double **inputRainfall()
{
    double **rainfall = (double **)malloc(12 * sizeof(double *));
    int i;
    for (i = 0; i < 12; i++)
    {
        rainfall[i] = (double *)malloc(days[i] * sizeof(double));
    }
    for (i = 0; i < 12; i++)
    {
        int j;
        printf("Enter rainfall for month %d: ", i + 1);
        for (j = 0; j < days[i]; j++)
        {
            scanf("%lf", &rainfall[i][j]);
        }
    }
    return rainfall;
}

void outputRainfall(double **rainfall)
{

    double average = averageRainfall(rainfall);
    printf("The average rainfall for the year is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 1);
    printf("The average rainfall for January is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 2);
    printf("The average rainfall for February is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 3);
    printf("The average rainfall for March is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 4);
    printf("The average rainfall for April is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 5);
    printf("The average rainfall for May is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 6);
    printf("The average rainfall for June is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 7);
    printf("The average rainfall for July is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 8);
    printf("The average rainfall for August is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 9);
    printf("The average rainfall for September is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 10);
    printf("The average rainfall for October is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 11);
    printf("The average rainfall for November is %.2f\n", average);
    average = averageRainfallByMonth(rainfall, 12);
    printf("The average rainfall for December is %.2f\n", average);
}

double averageRainfall(double **rainfall)
{
    double average = 0;
    int i, j;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < days[i]; j++)
        {
            average += rainfall[i][j];
        }
    }
    average /= 365;
    return average;
}

double averageRainfallByMonth(double **rainfall, int month)
{
    double average = 0;
    int i;
    for (i = 0; i < days[month - 1]; i++)
    {
        average += rainfall[month - 1][i];
    }
    average /= days[month - 1];
    return average;
}