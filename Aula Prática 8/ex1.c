#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int dado[30]={0};
    int i, j;
    int d1=0, d2=0, d3=0, d4=0, d5=0, d6=0;

    for (i = 0; i < 30; i++)
    {
        dado[i] = (rand() % 6) + 1;
    }

    printf("Histrograma de 30 elementos:\n");
    i = 0;

    for (j = 0; j < 30; j++)
    {
        if      (dado[j] == 1)
            d1++;
        else if (dado[j] == 2)
            d2++;
        else if (dado[j] == 3)
            d3++;
        else if (dado[j] == 4)
            d4++;
        else if (dado[j] == 5)
            d5++;
        else if (dado[j] == 6)
            d6++;
    }

    i = 0;

    printf("1- ");
    for (i = 0; i < d1; i++)
        printf("*");
    printf("\n");

    i = 0;

    printf("2- ");
    for (i = 0; i < d2; i++)
        printf("*");
    printf("\n");

    i = 0;

    printf("3- ");
    for (i = 0; i < d3; i++)
        printf("*");
    printf("\n");

    i = 0;

    printf("4- ");
    for (i = 0; i < d4; i++)
        printf("*");
    printf("\n");

    i = 0;

    printf("5- ");
    for (i = 0; i < d5; i++)
        printf("*");
    printf("\n");

    i = 0;

    printf("6- ");
    for (i = 0; i < d6; i++)
        printf("*");
    printf("\n");

    return 0;
}