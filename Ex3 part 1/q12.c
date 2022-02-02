#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter no. of rows(m) and no. of columns(n).\n");
    scanf("%d", &m);
    scanf("%d", &n);
    int mat[20][20];
    printf("Enter matrix 1 rowwise\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int row, col, max;
    printf("Enter the row index to find element in: ");
    scanf("%d", &row);
    printf("Enter the column index to find element in: ");
    scanf("%d", &col);
    // row
    max = mat[row][0];
    for (int i = 0; i < n; i++)
    {
        if (mat[row][i] > max)
        {
            max = mat[row][i];
        }
    }
    printf("The maximum element in row index %d is %d\n", row, max);
    // column
    max = mat[0][col];
    for (int i = 0; i < m; i++)
    {
        if (mat[i][col] > max)
        {
            max = mat[i][col];
        }
    }
    printf("The maximum element in column index %d is %d\n", col, max);
}