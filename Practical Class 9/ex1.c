#include <stdio.h>
void preencher_vetor(double v[], int N)
{
    int i;
    for (i = 0; i < N ; i++)
    {
        printf ("Introduza o elemtento %d:\n", i+1);
        scanf ("%lf", &v[i]);
    }
}

int procuraTodos(double *v, int N, int x, int posicoes[], int *nPosicoes)
{
    int i= 0;
    for (i = 0 ; i < N ; i++)
    {
        if (v[i] == x)
        {
            posicoes[*nPosicoes] = i;
            nPosicoes++;
        }
    }
    if (*nPosicoes > 0) return 1;
    else if (*nPosicoes == 0) return 0;
}
void imprimir_vetor(int posicoes[], int *nposicoes )
{
    int i;
    for (i = 0; i < *nposicoes; i++)
        printf (" %d ", posicoes[i]);
    printf ("}\n");
}

int main()
{
    int nposicoes=0,N,aux,posicoes[100];
    double v[100], x;
    printf ("Quantos elementos deseja armazenar?\n");
    scanf ("%d", &N);
    preencher_vetor(v, N);
    printf ("Qual é o valor que pretende procurar no vetor?\n");
    scanf ("%lf",&x);
    if (procuraTodos(v, N, x, posicoes, &nposicoes))
    {
        printf ("O valor %.1f foi encontrado na(s) posição(s):", x); 
        imprimir_vetor(posicoes, &nposicoes);
    }    
    else printf ("O valor %.1f não foi encontrado\n", x);
    return 0;
}
