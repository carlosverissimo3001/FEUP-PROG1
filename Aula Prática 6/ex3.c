#include <stdio.h>
#include <limits.h>

int dig (int num, int digit) 
{
    int cont, i;
    while (num > 10)
    {
        for (i=0 ; i<INT_MAX ; i++) 
        {
            if (num%10 == digit) cont++;
            num/=10;
        }    
    }
    if (num == digit) cont++;       
    return cont;
}

int main () 
{ 
    int digit,num;
    printf ("Introduza um número inteiro: \n");
    scanf  ("%d", &num);
    printf ("Introduza um dígito:\n");
    scanf  ("%d", &digit);
    printf ("O dígito %d aparece %d vezes no número %d\n", digit, dig(num, digit), num);
return 0;
}