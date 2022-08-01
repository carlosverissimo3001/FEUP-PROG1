#include <stdio.h>

int main() {
    int a, b, c, maximo, minimo, medio;
    printf("Digite 3 numeros:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) 
    {
      maximo = a;
      if (b > c) {
        medio = b;
        minimo = c;
      }
      else 
        {
        medio = c;
        minimo = b;  
        }
    }
    if (b > a && b>c) 
    {
       maximo = b;
       if (a > c) 
        {
        medio = a;
        minimo = c;  
        } 
      else 
        {
        medio = c;
        minimo = a;  
        }
    }
    if (c > a && c>b) 
    {
       maximo = c;
       if (a > b) 
        {
        medio = a;
        minimo = b;  
        } 
      else 
        {
        medio = b;
        minimo = a;  
        }
    }    
    printf("%d %d %d\n", minimo, medio, maximo);
}