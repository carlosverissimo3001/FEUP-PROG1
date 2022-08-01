#include <stdio.h>

int main () {

    int num1, num2, resto;
    printf ("Digite um número inteiro: \n") ;
    scanf ("%d", &num1 ) ;
    printf ("Digite um outro número inteiro: \n") ;
    scanf ("%d", &num2 ) ;
    resto = num1%num2 ;
    if (resto == 0)
        printf ("%d é múltiplo de %d\n", num1, num2) ;
    else    
        printf ("%d não é múltiplo de %d\n", num1, num2) ;

return 0;

}