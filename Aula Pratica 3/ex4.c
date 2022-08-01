#include <stdio.h>

int main()
{
    int num, dig1,dig3 ;
    printf("Insira um número com 3 dígitos:\n");
    scanf ("%d", &num);
    dig1 = (num/100) ;
    dig3 = (num%10) ;
    
    
    if (dig1 == dig3)
        printf("O número é uma capicua\n");
    else
        printf("O número não é uma capicua\n");
    

    return 0;
}