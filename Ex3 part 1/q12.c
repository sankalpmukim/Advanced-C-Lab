// WAP to find the maximum element in a given row and minimum element in a given column for a given matrix.
// Algorithm:
// 1. Take the matrix from the user.
// 2. Take the row number from the user.
// 3. Take the column number from the user.
// 4. Declare a variable to store the maximum element.
// 5. Declare a variable to store the minimum element.
// 6. Traverse the row.
// 7. If the element is greater than the maximum element, then set the maximum element to the element.
// 8. Else if the element is less than the minimum element, then set the minimum element to the element.
// 9. Display the maximum element and the minimum element.
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