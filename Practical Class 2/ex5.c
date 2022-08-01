#include <stdio.h>

int main () 

{
    int bit3, bit2, bit1, bit0, dec ;
    printf ("Digite um número em binário, separado por vírgulas (ex: 1,1,1,1): \n");
    scanf ("%d, %d, %d, %d", &bit3, &bit2, &bit1, &bit0) ;
    dec = (bit3*2*2*2) + (bit2*2*2) + (bit1*2) + (bit0) ;
    printf ("O valor na base decimal: %d \n", dec) ;
    printf ("O valor na base octal: %o \n", dec) ;
    printf ("O valor na base hexadecimal: %X \n", dec) ;

return 0;


}