#include <stdio.h>
#include <math.h>

int main()
{
    double delta, a, b, c, s1, s2, im, real1, real2 ;
    printf ("Introduza a (ax^2)\n");
    scanf ("%lf", &a);
    printf ("Introduza b (bx)\n");
    scanf ("%lf", &b);
    printf ("Introduza c \n");
    scanf ("%lf", &c);
    delta = b*b - 4*a*c ;
    if (delta > 0 ) 
    {
        s1 = (-b + sqrt (delta)) / (2*a) ;
        s2 = (-b - sqrt(delta)) / (2*a) ;
        printf ("As soluções são: %lf e %lf \n", s1, s2) ;  
    } 
    
    else if (delta == 0)
    {
        s1 = -b / (2*a) ;
        printf ("A solução é: %lf \n", s1) ;
    } 
    
    else 
    {
        im= sqrt ((-delta)/2*a);
        real1 = -b - im ;
        real2 = -b + im ;
        printf ("As soluções são: %lfi e %lfi\n", real1, real2);
    }
    
    return 0;
    
}    