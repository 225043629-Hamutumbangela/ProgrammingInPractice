#include <stdio.h>

int main()
{
    char studentName[50];
    double test1;
    double test2;
    double assignment;
    double total;

    printf("============================================\n");
    printf("          STUDENT RESULT CALCULATOR\n");
    printf("============================================\n\n");

    printf("Enter Student Name: ");
    scanf("%49s", studentName);

    printf("Enter Test 1 Mark: ");
    scanf("%lf", &test1);

    printf("Enter Test 2 Mark: ");
    scanf("%lf", &test2);

    printf("Enter Assignment Mark: ");
    scanf("%lf", &assignment);

    total = test1 + test2 + assignment;

    printf("\n============================================\n");
    printf("             STUDENT RESULT\n");
    printf("============================================\n");

    printf("Student Name : %s\n", studentName);
    printf("Test 1       : %.2f\n", test1);
    printf("Test 2       : %.2f\n", test2);
    printf("Assignment   : %.2f\n", assignment);
    printf("Total        : %.2f\n", total);

    if (total >= 75)
    {
        printf("Result       : Distinction\n");
    }
    else if (total >= 60)
    {
        printf("Result       : Credit\n");
    }
    else if (total >= 50)
    {
        printf("Result       : Pass\n");
    }
    else
    {
        printf("Result       : Fail\n");
    }

    printf("============================================\n");

    return 0;
}