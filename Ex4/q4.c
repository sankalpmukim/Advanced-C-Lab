// Write a program and the following functions to compute values for the following data values stored in a two dimensional array.
#include <stdio.h>
#include <stdlib.h>

// A function to input the data into a two dimensional array.
double **input2DData(int rows, int columns);

// A function to compute the row averages and store them in a one dimensional array.
void computeRowAverages(double *rowAverages, int columns, double **data);

// A function to compute the column averages and store them in a one dimensional array.
void computeColumnAverages(double *columnAverages, int rows, double **data);

// A function to compute the average of all the values in the array.
double fullAverage(double **data, int rows, int columns);

// A function to output the array, row averages, column averages, and the overall average.
void outputData(double **data, int rows, int columns);

int main()
{
    int rows, columns;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    printf("Enter the number of columns:");
    scanf("%d", &columns);
    double **data = input2DData(rows, columns);
    outputData(data, rows, columns);
}

double **input2DData(int rows, int columns)
{
    // allocate space
    double **data = (double **)malloc(rows * sizeof(double *));
    printf("Total rows to enter data for: %d\n", rows);
    // input data
    for (size_t i = 0; i < rows; i++)
    {
        printf("Enter data for row %ld: ", (i + 1));
        data[i] = (double *)malloc(sizeof(double));
        for (size_t j = 0; j < columns; j++)
        {
            scanf("%lf", &data[i][j]);
        }
    }
    return data;
}

void computeRowAverages(double *rowAverages, int columns, double **data)
{
    for (size_t i = 0; i < columns; i++)
    {
        double sum = 0;
        for (size_t j = 0; j < columns; j++)
        {
            sum += data[i][j];
        }
        rowAverages[i] = sum / columns;
    }
}

void computeColumnAverages(double *columnAverages, int rows, double **data)
{
    for (size_t i = 0; i < rows; i++)
    {
        double sum = 0;
        for (size_t j = 0; j < rows; j++)
        {
            sum += data[j][i];
        }
        columnAverages[i] = sum / rows;
    }
}

double fullAverage(double **data, int rows, int columns)
{
    double sum = 0;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            sum += data[i][j];
        }
    }
    return sum / (rows * columns);
}

void outputData(double **data, int rows, int columns)
{
    double *rowAverages = (double *)malloc(sizeof(double) * columns);
    double *columnAverages = (double *)malloc(sizeof(double) * rows);
    computeRowAverages(rowAverages, columns, data);
    computeColumnAverages(columnAverages, rows, data);
    printf("\nRow averages:\n");
    for (size_t i = 0; i < columns; i++)
    {
        printf("%f\n", rowAverages[i]);
    }
    printf("\nColumn averages:\n");
    for (size_t i = 0; i < rows; i++)
    {
        printf("%f\n", columnAverages[i]);
    }
    printf("\nOverall average: %f\n", fullAverage(data, rows, columns));
}
