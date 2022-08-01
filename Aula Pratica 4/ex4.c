#include <stdio.h>

int main () 
{
    
    int i=2, num;
    printf ("Digite o número que pretende que seja fatorizado:\n");
    scanf ("%d", &num);
    while (num != 1)
        {
            while ((num%i) == 0)
            {
                if ((num%i) == 0)
                {
                  printf ("%d ", i);
                  num = num/i;
                }
            }
         i++;   
    }


    return 0;    
}

