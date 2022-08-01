#include <stdio.h>
#include <limits.h>

void preencher_vetor(double v[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf ("Introduza o elemtento %d:\n", i+1);
        scanf ("%lf", &v[i]);
    }
}

double somatorio_vetor(double v[])
{
    int i;
    double soma=0;
    for (i = 0; i < 10; i++)
    {
        soma = soma + v[i];
    }
    return soma;
}

void imprimir_vetor(double v[])
{
    int i;
    printf ("O vetor lido foi: {");
    for (i = 0; i < 9; i++)
        printf ("%.1f ", v[i]);
    printf ("%.1f", v[9]);
    printf ("}\n");
}

double avg (double v[])
{
  return (somatorio_vetor(v) / 10);
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


int main() 
{
    double v[10];
    preencher_vetor (v);
    printf ("Média: %.1f\n",avg(v));
    printf ("Máximo: %.1f\n",max(v));
    printf ("Mínimo: %.1f\n",min(v));
    imprimir_vetor(v);
}