#include <stdio.h>

int main () 
{
    int num, soma, resto;
    soma = 0;
    printf ("Introduza um número inteiro\n");
    scanf ("%d", &num);

    while (num > 0)
    {
        resto= num%10;
        num= (num-resto)/10;
        soma= soma + resto;

    }
    
    printf ("A soma dos dígitos é: %d\n", soma);
    return 0 ;

}