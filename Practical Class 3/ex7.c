#include <stdio.h>

int main()
{
   double x,y ;
   printf ("Indique o ponto (x,y)\n");
   scanf ("%lf, %lf", &x, &y);
   
   if (x==0 && y!=0)
        printf("O ponto encontra-se no eixo ordenadas\n");
   else if (x != 0 && y==0) 
        printf("O ponto encontra-se no eixo abcissas\n");
   else if (x == 0 && y==0) 
        printf("O ponto encontra-se no centro do gráfico\n");
   else if (x > 0 && y>0) 
        printf("O ponto encontra-se no 1º quadrante\n");
   else if (x < 0 && y>0) 
        printf("O ponto encontra-se no 2º quadrante\n");
   else if (x < 0 && y<0) 
        printf("O ponto encontra-se no 3º quadrante\n");
   else if (x > 0 && y<0)  
        printf("O ponto encontra-se no 4º quadrante\n");

    return 0;
}