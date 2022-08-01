#include <stdio.h>


int main()
{
    int num, dig3, dig2, dig1;
    printf ("Insira o número em numeração romana com 3 dígitos:\n");
    scanf ("%d", &num);
    dig1 = num/100;
    dig2 = num/10;
    dig2= dig2%10;
    dig3 = num%10;
    
    switch (dig1)
    {
        case 1 : 
            printf ("C"); break;
        case 2 :
            printf ("CC"); break;
        case 3 : 
            printf ("CCC"); break;
        case 4 :
            printf ("CD"); break;
        case 5 :
            printf ("D"); break;
        case 6 :
            printf ("DC"); break;
        case 7 :
            printf ("DCC"); break;
        case 8 :
            printf ("DCCC"); break;
        case 9 : 
            printf ("CM"); break;
    }
    
    switch (dig2)
    {
        case 1 : 
            printf ("X"); break;
        case 2 :
            printf ("XX"); break;
        case 3 : 
            printf ("XXX"); break;
        case 4 :
            printf ("XL"); break;
        case 5 :
            printf ("L"); break;
        case 6 :
            printf ("LX"); break;
        case 7 :
            printf ("LXX"); break;
        case 8 :
            printf ("LXXX"); break;
        case 9 : 
            printf ("XC"); break;
    }

    switch (dig3)
    {
        case 1 : 
            printf ("I\n"); break;
        case 2 :
            printf ("II\n"); break;
        case 3 : 
            printf ("III\n"); break;
        case 4 :
            printf ("IV\n"); break;
        case 5 :
            printf ("V\n"); break;
        case 6 :
            printf ("VI\n"); break;
        case 7 :
            printf ("VII\n"); break;
        case 8 :
            printf ("VIII\n"); break;
        case 9 : 
            printf ("IX\n"); break;
    } 
return 0;
}