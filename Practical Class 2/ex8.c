#include <stdio.h>

int main () 

{

    double num1 ;
    int pSup, pInf;

    printf ("Digite um número: \n") ;
    scanf ("%lf", &num1) ;

    printf ("O valor arredondado é: %d \n", (int)(num1 + 0.5)) ;

    pInf = (int) num1 ;
    pSup = (int) num1 ;

    // Par Superior

    if (pSup%2 == 0 ) 
        printf ("O número par superior mais próximo é: %d\n", pSup + 2) ;
    else
        printf ("O número par superior mais próximo é: %d\n", pSup + 1) ;
        
    
    // Par Inferior
    
    if (pInf%2 == 0) 
    {
        pInf = pInf - 2 ;

        if (pInf != 0 )
        printf ("O número par inferior mais próximo é: %d\n", pInf) ;

    }
    else
    {
        pInf = pInf - 1 ;
        if (pInf != 0 )
        printf ("O número par inferior mais próximo é: %d\n", pInf) ;
    }
        
       
    return 0 ;

}
    