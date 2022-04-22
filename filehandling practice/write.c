#include <stdio.h>

int main()
{
    // create a file test.txt
    FILE *fp;
    fp = fopen("test.txt", "w");
    // write "Hello World" to the file
    fprintf(fp, "Hello World");
    // close the file
    fclose(fp);
    return 0;
}