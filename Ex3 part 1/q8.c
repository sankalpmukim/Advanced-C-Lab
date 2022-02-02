#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter no. of rows(m) and no. of columns(n).\n");
    scanf("%d", &m);
    scanf("%d", &n);
    int mat1[20][20], mat2[20][20], mat3[20][20];
    printf("Enter matrix 1 rowwise\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter matrix 2 rowwise\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Sum of matrix 1 & 2 is:\n");
    printf("[");
    for (int i = 0; i < m; i++)
    {
        printf("\n\t");
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", mat3[i][j]);
        }
    }
    printf("\n]\n");
}