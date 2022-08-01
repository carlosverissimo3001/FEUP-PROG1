#include <stdio.h>

int multiplicacao(int primeiroNumero, int segundoNumero)
{
    if (segundoNumero==0) return 0;
    return primeiroNumero+multiplicacao(primeiroNumero,segundoNumero-1);
}

int main()
{
int num1, num2;
    printf("Introduza o primeiro número:\n");
    scanf ("%d", &num1);
    printf("Introduza o segundo número:\n");
    scanf ("%d", &num2);
    printf("Resultado da multiplicação: %d\n", multiplicacao(num1, num2));
    return 0;
}