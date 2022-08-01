#include <stdio.h>

int main()
{
    
    int op1, op2;
    char simb;
    
    printf("Introduza o operador\n");
    scanf ("%c", &simb);
    printf("Introduza um operando\n");
    scanf ("%d", &op1);
    printf("Introduza um operando\n");
    scanf ("%d", &op2);
    
    switch (simb) {
      case '+':
        printf ("Resultado = %d\n", op1 + op2); break;
      case '-':
        printf ("Resultado = %d\n", op1 - op2); break;
      case '*':
        printf ("Resultado = %d\n", op1 * op2); break;
      case '/':
        printf ("Resultado = %d\n", op1 / op2); break;
      case '%': 
        printf ("Resultado = %d\n", op1 % op2); break;
    }
    return 0;
}