#include <stdio.h>

#define MAX_EMPLOYEES 50

int main()
{
    double salaries[MAX_EMPLOYEES];
    double total = 0.0;
    double average;
    double highest;
    double lowest;
    double searchSalary;
    int found = 0;

    int i;
    int j;
    double temp;

    printf("============================================\n");
    printf("       EMPLOYEE SALARY MANAGEMENT SYSTEM\n");
    printf("============================================\n\n");

    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);
    }

    printf("\n============================================\n");
    printf("              ALL SALARIES\n");
    printf("============================================\n");

    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        printf("Employee %d: NAD %.2f\n", i + 1, salaries[i]);
    }

    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        total = total + salaries[i];
    }

    average = total / MAX_EMPLOYEES;

    highest = salaries[0];
    lowest = salaries[0];

    for (i = 1; i < MAX_EMPLOYEES; i++)
    {
        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    printf("\n============================================\n");
    printf("           SALARY STATISTICS\n");
    printf("============================================\n");

    printf("Total Salary Expenditure : NAD %.2f\n", total);
    printf("Average Salary           : NAD %.2f\n", average);
    printf("Highest Salary           : NAD %.2f\n", highest);
    printf("Lowest Salary            : NAD %.2f\n", lowest);

    printf("\nEnter a salary to search for: ");
    scanf("%lf", &searchSalary);

    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary NAD %.2f found for Employee %d.\n",
                   searchSalary, i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Salary NAD %.2f was not found.\n", searchSalary);
    }

    for (i = 0; i < MAX_EMPLOYEES - 1; i++)
    {
        for (j = 0; j < MAX_EMPLOYEES - 1 - i; j++)
        {
            if (salaries[j] > salaries[j + 1])
            {
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }

    printf("\n============================================\n");
    printf("        SALARIES LOWEST TO HIGHEST\n");
    printf("============================================\n");

    for (i = 0; i < MAX_EMPLOYEES; i++)
    {
        printf("NAD %.2f\n", salaries[i]);
    }

    printf("============================================\n");

    return 0;
}