#include <stdio.h>
#include <string.h>
#define MAX 100

int conta(char *frase, char *palavra)
{
    int cont=0,i;
        if (strstr(frase, palavra)) cont++;
    return cont;
}

int main()
{
    char frase[100],palavra[100];
    printf("Digite uma frase:\n");
    fgets(frase, MAX, stdin);
    printf("Palavra?\n");
    fgets(palavra, MAX, stdin);
    printf("A palavra %s apareceu %d vezes na frase\n", palavra, conta(frase, palavra));
    return 0;
}