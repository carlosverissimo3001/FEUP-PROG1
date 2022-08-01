#include <stdio.h>

int main()
{
    
    int altura ;
    
    printf("Qual é a altura da pessoa(em cm)?\n");
    scanf ("%d", &altura);
    
    if (altura < 130 )
        printf("Essa pessoa é baixíssima\n");
    else if (altura >= 130 && altura < 160 )
        printf("Essa pessoa é baixa\n");
    else if (altura >= 160 && altura < 175 )
        printf("Essa pessoa é mediana\n");
    else if (altura >= 175 && altura < 190 )
        printf("Essa pessoa é alta\n");
    else if (altura >= 190)    
        printf("Essa pessoa é altíssima\n");

    return 0;
}