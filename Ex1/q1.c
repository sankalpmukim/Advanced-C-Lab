// Anu’s basic salary is the input. Her dearness allowance is 20% of basic salary and house rent is 20% of basic salary. Write a program to calculate her gross salary.
#include <stdio.h>

int main()
{
    printf("Enter Anu's base salary: ");
    double base_salary;
    scanf("%lf", &base_salary);
    printf("\n");
    double da = base_salary * 0.2, hra = base_salary * 0.2; // 20% => 0.2
    printf("Dearness allowance: %lf\n", da);
    printf("House rental allowance: %lf\n", hra);
    double gross_salary = base_salary + da + hra;
    printf("Gross salary: %lf\n", gross_salary);
}