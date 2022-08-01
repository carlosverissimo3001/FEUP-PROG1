#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

int fat (int termo)
{   int valor = 1;          
    while (termo > 1) 
    {
        valor*= termo;  
        termo--;  
    }    
    return valor;
}
double seno (double x, double tolerancia) 
{
    double sinx=0,aux;
    int n=1;
    for (n=1 ; n <= INT_MAX ; n++)
    {
        aux = fabs(pow(-1, n+1) * (pow(x, 2*n-1) / fat(2*n-1)));
        //printf("%f\n", aux);
        if (aux >= tolerancia)
            sinx += (pow(-1, n+1) * (pow(x, 2*n-1) / fat(2*n-1)));
        else 
            break;   
    }
    sinx += (pow(-1, n+1) * (pow(x, 2*n-1) / fat(2*n-1)));
    return sinx;
}

int main () 
{ 
    double x, tolerancia;
    printf ("Qual é o valor de x (em radianos)?\n");
    scanf ("%lf", &x);
    printf ("Qual é o valor da tolerância?\n");
    scanf ("%lf", &tolerancia);
    printf ("O seno de %.4f é %f\n", x, seno(x, tolerancia));
    return 0;
}