#include <stdio.h>

int main () 

{
    int x, y ;

    printf ("Variável 1:\n");
    scanf ("%d", &x);
    printf ("Variável 2:\n");
    scanf ("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;

    printf ("Variável 1 depois da troca: %d \n",x);
    printf ("Variável 2 depois da troca: %d \n",y);


    return 0 ;

}