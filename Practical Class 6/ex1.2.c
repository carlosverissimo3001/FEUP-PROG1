#include <stdio.h>

int main ()
{
    int var1 = 5;
    char var2 = 'a';
    int *ptr1 = &var1;
    char *ptr2= &var2;
    *ptr2 = 'b';
    printf("var1 tem o endereco %p e o valor %d\n", ptr1, *ptr1);
    printf("var2 tem o endereco %p e o valor %d\n", ptr2, *ptr2);
    printf("tamanho de uma variável char:%lu\n", __SIZEOF_POINTER__);
    printf("tamanho de uma variável char*:%lu\n", __SIZEOF_WCHAR_T__);
    printf("tamanho de uma variável int:%lu\n", __SIZEOF_INT__);
    printf("tamanho de uma variável int*:%lu\n", __SIZEOF_POINTER__);

    
}