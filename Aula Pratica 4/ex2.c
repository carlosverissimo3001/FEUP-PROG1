#include <stdio.h>
#include <math.h>

int main()
{
    double ca, n, j, ci;
    printf("Qual é o capital inicial?\n");
    scanf ("%lf", &ci);
    printf("Qual é a taxa de juro dada pelo banco?\n");
    scanf ("%lf", &j);
    printf("Durante quantos anos?\n");
    scanf ("%lf", &n);
    
    ca = ci * pow((1+j/100), n);
    
    printf("O capital acumulado ao fim de %d anos é de %.3f euros \n", (int)n, ca );

    return 0;
}
