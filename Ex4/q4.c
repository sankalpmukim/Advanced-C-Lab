// Write a program and the following functions to compute the average value for the following data values stored in a two dimensional array.
#include <stdio.h>

// input the data into a two dimensional array
double **inputData(int *rows, int *cols, int m, int n);
// compute the row averages
double *rowAverages(double **data, int rows, int cols);
// compute the column averages
double *colAverages(double **data, int rows, int cols);
// compute the overall average
double overallAverage(double **data, int rows, int cols);
// output the data
void outputData(double **data, int rows, int cols);

int main()
{
    int rows, cols;
    double **data = inputData(&rows, &cols, 5, 5);
    outputData(data, rows, cols);
    return 0;
}

double **inputData(int *rows, int *cols, int m, int n)
{
    double **data = (double **)malloc(m * sizeof(double *));
    int i;
    for (i = 0; i < m; i++)
    {
        data[i] = (double *)malloc(n * sizeof(double));
    }
    for (i = 0; i < m; i++)
    {
        int j;
        printf("Enter data for row %d: ", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &data[i][j]);
        }
    }
    *rows = m;
    *cols = n;
    return data;
}

double *rowAverages(double **data, int rows, int cols)
{
    double *averages = (double *)malloc(rows * sizeof(double));
    int i;
    for (i = 0; i < rows; i++)
    {
        int j;
        double sum = 0;
        for (j = 0; j < cols; j++)
        {
            sum += data[i][j];
        }
        averages[i] = sum / cols;
    }
    return averages;
}

double *colAverages(double **data, int rows, int cols)
{
    double *averages = (double *)malloc(cols * sizeof(double));
    int i;
    for (i = 0; i < cols; i++)
    {
        int j;
        double sum = 0;
        for (j = 0; j < rows; j++)
        {
            sum += data[j][i];
        }
        averages[i] = sum / rows;
    }
    return averages;
}

double overallAverage(double **data, int rows, int cols)
{
    double sum = 0;
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum += data[i][j];
        }
    }
    return sum / (rows * cols);
}

void outputData(double **data, int rows, int cols)
{
    double *rowAverages = rowAverages(data, rows, cols);
    double *colAverages = colAverages(data, rows, cols);
    double overallAverage = overallAverage(data, rows, cols);
    int i;
    printf("\n");
    for (i = 0; i < rows; i++)
    {
        printf("Row %d average: %.2f\n", i + 1, rowAverages[i]);
    }
    printf("\n");
    for (i = 0; i < cols; i++)
    {
        printf("Column %d average: %.2f\n", i + 1, colAverages[i]);
    }
    printf("\n");
    printf("Overall average: %.2f\n", overallAverage);
}