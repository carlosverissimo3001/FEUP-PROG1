#include <stdio.h>

void preencher_vetor(double v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf ("Introduza o elemtento %d:\n", i+1);
        scanf ("%lf", &v[i]);
    }
}

double somatorio_vetor(double v[], int n)
{
    int i;
    double soma=0;
    for (i = 0; i < n; i++)
    {
        soma = soma + v[i];
    }
    return soma;
}

void imprimir_vetor(double v[], int n)
{
    int i;
    printf ("O vetor lido foi: {");
    for (i = 0; i < n-1; i++)
        printf ("%.1f ", v[i]);
    printf ("%.1f", v[n-1]);
    printf ("}\n");
}

int main() 
{
    int nElementos;
    double v[15];
    printf ("Quantos elementos deseja armazenar?\n");
    scanf ("%d", &nElementos);
    if (nElementos > 15) 
    { 
        printf ("O número de elementos está limitado a 15! Por favor introduza outro valor:\n");
        scanf ("%d", &nElementos);
    }
    preencher_vetor(v, nElementos);
    imprimir_vetor(v, nElementos);
    printf ("E a soma dos seus elementos é: %.1f\n", somatorio_vetor(v, nElementos));
    return 0;
}