#include <stdio.h>
#include <limits.h>
#include <math.h>

void preencher_vetor(double v[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf ("Introduza o elemtento %d:\n", i+1);
        scanf ("%lf", &v[i]);
    }
}

void imprimir_vetor1(double v[])
{
    int i;
    printf ("Vetor Soma: {");
    for (i = 0; i < 4; i++)
        printf ("%.1f ", v[i]);
    printf ("%.1f", v[4]);
    printf ("}\n");
}

void imprimir_vetor2(double v[])
{
    int i;
    printf ("Vetor Desvio max par: {");
    for (i = 0; i < 4; i++)
        printf ("%.1f ", v[i]);
    printf ("%.1f", v[4]);
    printf ("}\n");
}

double max (double v[])
{
    int i;
    double max= INT_MIN;
    for (i = 0 ; i < 10; i++)
    {
        if (v[i] > max) max = v[i];
    }
    return max;
}

double min (double v[])
{
    int i;
    double min= INT_MAX;
    for (i = 0 ; i < 10; i++)
    {
        if (v[i] < min) min = v[i];
    }
    return min;
}

void sum_v(double v[], double vSoma[])
{
    int i, j=0;
    for (i = 0 ; i < 10 ; i=i+2) 
    {
        vSoma[j] = v[i] + v[i+1];
        j++;
    }
}

double range_v(double v[])
{
    return (max(v) - min(v));
}

void diff_v(double v[], double dMax[])
{
    double aux, aux1, aux2, aux3;
    int i, j=0;
    for (i = 0 ; i < 10 ; i=i+2) 
    {
        aux = v[i]*v[i+1]; 
        aux1 = sqrt(aux);
        aux2 = fabs(aux1 - v[i]);
        aux3 = fabs(aux1 - v[i+1]);
        if (aux2 > aux3) dMax[j] = aux2;
        else dMax[j] = aux3;
        j++;
    }
}
int main() 
{
    int i,j;
    double v[10];
    double dMax[5];
    double vSoma[5];
    preencher_vetor (v);
    sum_v(v, vSoma);
    diff_v(v, dMax);
    imprimir_vetor1(vSoma);
    printf("Gama: %.1f\n", range_v(v));
    imprimir_vetor2(dMax);
    return 0;
}