#include <stdio.h>

int main () 

{

    int p, q ;

    printf ("P Q AND OR NAND NOR XOR\n") ;
    printf ("1 1  %d  %d  %d    %d   0 \n", 1&&1, 1||1, !(1&&1), !(1||1));
    printf ("1 0  %d  %d  %d    %d   1 \n", 1&&0, 1||0, !(1&&0), !(1||0));
    printf ("0 1  %d  %d  %d    %d   1 \n", 0&&1, 0||1, !(0&&1), !(0||1));
    printf ("0 0  %d  %d  %d    %d   0 \n", 0&&0, 0||0, !(0&&0), !(0||0));
    return 0 ;

}