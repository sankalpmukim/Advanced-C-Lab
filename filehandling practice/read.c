#include <stdio.h>

int main()
{
    // create a file test.txt
    FILE *fp;
    fp = fopen("test.txt", "r");
    // read the file
    char c;
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    // close the file
    fclose(fp);
    printf("\n");
    return 0;
}