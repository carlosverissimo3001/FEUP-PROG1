#include <stdio.h>

int main () 

{

    double r1, r2;

    printf ("Valor de R1: \n");
    scanf ("%lf", &r1);

    printf ("Valor de R2: \n");
    scanf ("%lf", &r2);

    printf ("valor da resistência equivalente em série: %.4f ohm\n", (r1+r2));
    printf ("valor da resistência equivalente em paralelo: %.4f ohm\n", (1/(1/r1+1/r2)));



    return 0 ;
}