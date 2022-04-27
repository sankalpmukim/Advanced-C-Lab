// Create a user-defined datatype from a structure. The structure should
// contain the variables such as name, regno, cgpa, and age of students. use
// array of structures.
#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int regno;
    float cgpa;
    int age;
};

int main()
{
    struct student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter regno: ");
        scanf("%d", &s[i].regno);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Regno: %d\n", s[i].regno);
        printf("Cgpa: %f\n", s[i].cgpa);
        printf("Age: %d\n", s[i].age);
    }
    return 0;
}