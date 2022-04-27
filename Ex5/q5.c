// Write a program to carry out the following:
// a.  Read a text file 'Input.Txt'
// b.  Print each word in reverse order
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("Input.txt", "r");
    char str[20];
    while (fscanf(fp, "%s", str) != EOF)
    {
        int i = strlen(str) - 1;
        while (i >= 0)
        {
            printf("%c", str[i]);
            i--;
        }
        printf(" ");
    }
    printf("\n");
    fclose(fp);
}