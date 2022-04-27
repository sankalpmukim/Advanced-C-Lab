// Write a program to copy the contents of one file to another, while doing so replace all lowercase characters with their equivalent uppercase characters
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *rptr, *wptr;
    rptr = fopen("q2_read.txt", "r");
    wptr = fopen("q2_write.txt", "w");

    if (rptr == NULL || wptr == NULL)
    {
        printf("File not found\n");
        return 0;
    }

    printf("The contents of the file are being read and copied to a new file.\n");
    char ch;
    while ((ch = fgetc(rptr)) != EOF)
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        fputc(ch, wptr);
    }
    printf("The contents of the file have been succesfully copied to a new file.\n");
    fclose(rptr);
    fclose(wptr);
}