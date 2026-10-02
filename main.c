#include <stdio.h>

int main()
{
    char municipality[50];
    char mayor[50];
    int population;

    printf("============================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("============================================\n\n");

    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    fgets(municipality, sizeof(municipality), stdin);

    printf("Enter Mayor's Name: ");
    fgets(mayor, sizeof(mayor), stdin);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n\n");
    printf("============================================\n");
    printf("       MUNICIPALITY INFORMATION REPORT\n");
    printf("============================================\n");
    printf("Municipality Name : %s", municipality);
    printf("Mayor's Name      : %s", mayor);
    printf("Population        : %d\n", population);
    printf("============================================\n");

    return 0;
}