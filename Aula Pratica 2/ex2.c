#include <stdio.h>

int main () {

    double f, c, k;

    printf ("Qual a temperatura em Celsius?\n");
    scanf ("%lf", &c);

    k = c + 273.15;

    f = c*(9./5)  + 32;

    printf ("%.1f C = %.2f K\n" , c,k);
    printf ("%.1f C = %.2f F\n" , c,f);

    return 0;

}