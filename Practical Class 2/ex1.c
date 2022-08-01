// area = pi*raio*raio
// perimetro = 2*pi*raio

#include <stdio.h>

int main ()  

{
    double raio, perimetro, area;
    double pi = 3.1416;
    
    printf ("Digite o raio da circunferência: \n" );
    scanf ("%lf", &raio);
    
    perimetro = 2*pi*raio;
    area = pi*raio*raio;

    printf ("Perímetro= %.4f \n", perimetro);
    printf ("Área= %.4f \n", area);
    return 0;


}