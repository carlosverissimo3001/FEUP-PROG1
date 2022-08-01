#include <stdio.h>

int pos(int x, int y, int tamanho) 
{ 
    return x + y * tamanho; 
}

void imprimeMatriz(int matriz[], int N)
{
    int i,j,k=0;
    for (i=0 ; i<N; i++)
    {
        for (j=0 ; j<N; j++)
        {
            printf("%d", matriz[k]);
            printf(" ");
        }  
        printf("\n");
    }
}

void imprimeMatriz2(int resultado[], int N)
{
    int i,j,k=0;
    for (i=0 ; i<N; i++)
    {
        printf("%d\n", resultado[i]);
    }
}

void produtoEscalar(int matriz[], int matrizEsc[], int N, int escalar)
{
    int i;
    for (i=0 ; i<N*N; i++)
    {
        matrizEsc[i] = escalar*matriz[i];
    }
}

void multMatrizes(int matriz[], int mult[], int resultado[], int N)
{
    int i, j,k=0;
    for (i=0; i<N; i++)
    {
        resultado[i] = 0;
        for(j=0; j<N; j++)
        {
            
            resultado[i] = resultado [i] + (matriz[k]*(mult[j]));
            k++;
        }
    }
}

int main() 

{
    int N, i, j, k=0, escalar, matriz[100], mult[10], resultado[10], matrizEsc[100];
    int opcao;
    printf("Qual é a ordem da matriz?\n");
    scanf("%d", &N);
    for (i=0 ; i<N; i++)
    {
        for (j=0 ; j<N; j++)
        {
            printf("Introduza o elemento (%d,%d) da matriz\n", i+1, j+1);
            scanf ("%d", &matriz[k]);
            k++;
        }    
    }
    while (opcao != 4)
    {
        printf("MENU\n1- Imprimir Matriz\n2- Multiplicar a matriz por um escalar\n3- Multiplicar por uma matriz N x 1\n4- Sair\n"); 
        scanf ("%d", &opcao);
        switch (opcao)
        {
            case 1 :
                imprimeMatriz(matriz, N); break;
            case 2 :
                printf("Introduza o escalar:\n");
                scanf("%d", &escalar);
                produtoEscalar(matriz, matrizEsc, N, escalar);
                printf("Matriz Resultante:\n"); 
                imprimeMatriz(matrizEsc, N); break;
            case 3 :
                for (i=0; i<N; i++)
                {
                    printf("Introduza o elemento (%d,1) da matriz a multiplicar pela matriz inicial\n", i+1);
                    scanf("%d", &mult[i]);
                }
                multMatrizes(matriz, mult, resultado, N);
                printf("Matriz Resultante:\n");
                imprimeMatriz2(resultado, N); break;
            case 4: break;
            default:
                printf("Opção inválida\n"); break;       
        }
    } 
    return 0;
}