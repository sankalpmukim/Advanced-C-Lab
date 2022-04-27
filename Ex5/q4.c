// Given a text file, write a program to create another text file
// deleting the words 'a', 'the', 'an' and replacing each one of them
// with a blank space.
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *rptr, *wptr;
    rptr = fopen("q4_read.txt", "r");
    wptr = fopen("q4_write.txt", "w");

    if (rptr == NULL || wptr == NULL)
    {
        printf("File not found\n");
        return 0;
    }

    printf("The contents of the file are being read and copied to a new file.\n");
    char str[20];
    while (fscanf(rptr, "%s", str) != EOF)
    {
        if (strcmp(str, "a") == 0 || strcmp(str, "the") == 0 || strcmp(str, "an") == 0)
        {
            fputs(" ", wptr);
        }
        else
        {
            fputs(str, wptr);
            fputs(" ", wptr);
        }
    }
    printf("The contents of the file have been succesfully copied to a new file.\n");
    fclose(rptr);
    fclose(wptr);
}