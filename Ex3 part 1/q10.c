#include <stdio.h>

int main()
{
    int m1, n1, m2, n2;
    int mat1[20][20], mat2[20][20], mat3[20][20];
    printf("Enter no. of rows(m) and no. of columns(n) for 1st matrix.\n");
    scanf("%d", &m1);
    scanf("%d", &n1);
    printf("Enter no. of rows(m) and no. of columns(n) for 2nd matrix.\n");
    scanf("%d", &m2);
    scanf("%d", &n2);
    if (n1 != m2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }
    printf("Enter matrix 1 rowwise\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter matrix 2 rowwise\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < n1; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of matrix 1 & 2 is:\n");
    printf("[");
    for (int i = 0; i < m1; i++)
    {
        printf("\n\t");
        for (int j = 0; j < n2; j++)
        {
            printf("%d  ", mat3[i][j]);
        }
    }
    printf("\n]\n");
}