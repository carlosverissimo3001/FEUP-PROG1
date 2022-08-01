#include <stdio.h>
#include <math.h>

double converte_codigo_cores(int cor1, int cor2, int multiplicador, double *ret){
    double resistor;  
    resistor = (cor1*10 + cor2*1 ) * pow(10, multiplicador);

    if (multiplicador > 9 || cor1 > 9 || cor2 > 9)
        return -1;
    else{
        *ret = resistor;
        return 1;
    }
}

int main(){
    int cor1, cor2;
    int multiplicador;
    double ret;
    printf("Cores:\n"); 
    printf("0 - Black\n");
    printf("1 - Brown\n"); 
    printf("2 - Red\n");
    printf("3 - Orange\n");
    printf("4 - Yellow\n");
    printf("5 - Green\n");
    printf("6 - Blue\n");
    printf("7 - Violet\n");
    printf("8 - Grey\n");
    printf("9 - White\n");
    printf ("Introduza o valor da primeira banda:\n");
    scanf ("%d", &cor1);
    printf ("Introduza o valor da segudna banda:\n");
    scanf ("%d", &cor2);
    printf ("Introduza o valor da terceira banda:\n");
    scanf ("%d", &multiplicador);
    converte_codigo_cores(cor1, cor2, multiplicador, &ret);
    printf("Valor da resistencia %.2f Ohms\n", ret);

}
