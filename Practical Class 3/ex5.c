#include <stdio.h>

int main()
{
    
    int mes, ano, dias ;
    printf("Insira uma data (mês ano)\n");
    scanf ("%d %d", &mes, &ano);
    
    switch (mes) 
    {   
        case 1:
            dias = 31 ; break;
        case 2 :
            dias = 28 ; break;
        case 3 :
            dias = 31 ; break;
        case 4 :
            dias = 30 ; break;
        case 5 :
            dias = 31 ; break;
        case 6 : 
            dias = 30 ; break;
        case 7 :
            dias = 31 ; break;
        case 8 :
            dias = 31 ; break;
        case 9 :
            dias = 30 ; break;
        case 10 :
            dias = 31 ; break;
        case 11 :
            dias = 30 ; break;
        case 12 :
            dias = 31 ; break;
    }
    if (mes == 2) 
    {
        if (ano%4 == 0) 
            dias = 29;
    }
    
    printf ("O mês %d de %d tem %d dias.\n", mes, ano, dias) ; 
    
    
    
    
    
   
    return 0;
}