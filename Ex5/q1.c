// Write a program to read a file and display its contents along with line numbers before each line.
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char ch;
    int i = 1;
    fp = fopen("q1.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
        i++;
    }
    printf("\n");
    fclose(fp);
    return 0;
}