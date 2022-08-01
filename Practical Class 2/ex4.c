#include <stdio.h>

int main () 

{

    double num1;
    printf ("Digite um número: \n");
    scanf ("%lf", &num1);

    printf ("Número com 3 casas decimais: %.3f \n",num1);
    printf ("Parte inteira: %d \n",(int)num1);
    printf ("Parte decimal: %f \n",(num1-(int)num1));




    return 0;


}