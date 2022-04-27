// Write a program to encrypt/decrypt a file using a substitution ciper: in this each
// character read from the source file is substituted by a corresponding predetermined
// character and this character is written to the target file.For example, if character 'A'is
// read from the source file, and if we have decided that every 'A' is to be substituted by
// '!', then a '!' would be written to the target file in place of every 'A'.
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    FILE *pp;
    fp = fopen("q3_read.txt", "r");
    pp = fopen("q3_write.txt", "w");

    printf("->Reading the text from the file.\n");
    char ch, sh;
    while ((ch = fgetc(fp)) != EOF)
    {
        if ((ch != '\n') && (ch != ' '))
        {
            sh = ch + 10;
            fputc(sh, pp);
        }
        else
        {
            fputc(ch, pp);
        }
    }
    printf("->The text has been succesfully copied to the new file.\n");
    fclose(fp);
    fclose(pp);

    // decrypt
    printf("->The decrypted text is as follows:\n");
    printf("\"\"\"\n");
    pp = fopen("q3_write.txt", "r");
    while ((ch = fgetc(pp)) != EOF)
    {
        sh = ch - 10;
        if ((ch != '\n') && (ch != ' '))
        {
            printf("%c", sh);
        }
        else
        {
            printf("%c", ch);
        }
    }
    printf("\n\"\"\"");
    printf("\n");
}