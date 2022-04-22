// write a c program to get 10 vit registration numbers and store only the first year students registration number into a file "registrations.txt". Also retrieve the second last registration number from the file.
#include <stdio.h>
#include <stdlib.h>

int is_fresher(char *str)
{
    return str[0] == '2' && str[1] == '1';
}

char **input()
{
    char **arr = (char **)malloc(sizeof(char *) * 10);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = (char *)malloc(sizeof(char) * 10);
        printf("Enter registration number: ");
        scanf("%s", arr[i]);
    }
    return arr;
}

// write to file
void write_to_file(char **arr, int n)
{
    FILE *fp;
    fp = fopen("registrations.txt", "w");
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == '2' && arr[i][1] == '1')
        {
            fprintf(fp, "%s\n", arr[i]);
        }
    }
    fclose(fp);
}

// retrieve from file the second last line using fseek
char *retrieve_from_file()
{
    FILE *fp;
    char *str = (char *)malloc(sizeof(char) * 10);
    fp = fopen("registrations.txt", "r");
    fseek(fp, -2 * 10, SEEK_END);
    fscanf(fp, "%s", str);
    fclose(fp);
    return str;
}

int main()
{
    char **arr = input();
    write_to_file(arr, 10);
    char *str = retrieve_from_file();
    printf("%s\n", str);
    return 0;
}