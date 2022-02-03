// WAP to find the product of boundary elements of a given matrix.
// Algorithm:
// 1. Take the matrix from the user.
// 2. Declare a variable to store the product.
// 3. Traverse the matrix.
// 4. If the element is the first element of the row, then multiply it with the product.
// 5. Else if the element is the first element of the column, then multiply it with the product.
// 6. Else if the element is the last element of the row, then multiply it with the product.
// 7. Else if the element is the last element of the column, then multiply it with the product.
// 8. Display the product.
#include <stdio.h>

int main()
{
    int m, n, product = 1;
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                product *= mat[i][j];
            }
        }
    }
    printf("Product of boundary elements: %d\n", product);
}