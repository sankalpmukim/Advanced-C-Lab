#include <stdio.h>

int main()
{
    // create a file test.txt
    FILE *fp;
    fp = fopen("test.txt", "a");
    // append "appended text" to the file
    fprintf(fp, "appended text");
    // close the file
    fclose(fp);
}