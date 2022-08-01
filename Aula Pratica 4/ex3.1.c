#include <stdio.h>
#include <limits.h>

int main()
{
    double num,media,soma=0;
    int min = INT_MAX;
    int max = INT_MIN;
    int n=0; 
    printf("Insira um valor\n");
    while (scanf("%lf", &num) != EOF)
    {
        
        if (num<min) 
            min = num;
        if (num>max) 
            max=num;
        soma= soma+num;
        n++;
    }       
    printf ("Máximo: %d\n", max);
    printf ("Mínimo: %d\n", min);
    media = (soma/n);
    printf ("Média: %.2f\n", media);
    
    return 0;
}


