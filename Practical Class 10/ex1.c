#include <stdio.h>
#include <string.h>
#define MAX 100

void inverte(char *fraseOrig, char *fraseInv)
{
    int i, size, cont=0;
     while (fraseOrig[cont] != '\0')
    {
        cont++; 
    }
    size = cont-1;
    for (i=0; i<cont; i++)
    {
        fraseInv[i] = fraseOrig[size];
        size--;
    }
}

int main() 
{

    char fraseOrig[100], fraseInv[100];
    printf ("Escreve uma frase:\n");
    fgets(fraseOrig, MAX, stdin);
    inverte(fraseOrig, fraseInv);
    printf("A frase invertida é: %s\n", fraseInv);
    return 0;
}