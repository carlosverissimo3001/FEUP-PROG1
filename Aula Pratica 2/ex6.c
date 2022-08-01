#include <stdio.h>

int main () 

{
    int tempo, seg, min, hrs, d;

    printf ("Qual o valor em segundos?\n");
    scanf ("%d", &tempo);

    d = (tempo / 86400) ;
    hrs = ((tempo - (d*86400))/3600) ;
    min = ((tempo - (d*86400)-(hrs*3600))/60) ;
    seg = ((tempo - (d*86400)-(hrs*3600)-(min*60))) ;

    printf ("%d segundos correspondem a %d dias, %d horas, %d minutos, %d segundos \n", tempo, d, hrs, min, seg) ;
    
    return 0 ;
}