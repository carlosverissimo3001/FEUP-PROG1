#include <stdio.h>

int contarepeticao(int v[], int tamanhoVetor, int numero)
{
    int cont=0, i, max=0;

    for (i = 0; i < tamanhoVetor; i++)
    {
        if (v[i] != numero) 
        {
           // max = cont;
            cont = 0;
        }
        else 
        {
            cont++;
            if (cont >= max) max = cont;
        } 
    }   
    return max;
}

int main()
{
    int v[100];
    int tamanho=0, digit, valor, i;
    for (i = 0; i < 100 ; i++)
    {
        printf("Introduza um número\n");
        scanf("%d", &valor);
        if (valor < 0) break;
        v[i] = valor;
        tamanho++;
    }
    printf("Número a pesquisar:\n");
    scanf("%d", &digit);
    printf("Maior sequência com números %d tem tamanho %d\n", digit, contarepeticao(v, tamanho, digit));
    return 0;
}
