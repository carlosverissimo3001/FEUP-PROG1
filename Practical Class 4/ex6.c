#include <stdio.h>

int main()
{
    int num, rev;
    int ret = 0;
    int i = 1;

    printf("Numero a inverter:\n");
    scanf("%d", &num);
    while (i <= num)
    {
        ret = ret * 10;
        ret = ret + (n % (i * 10) - n % i) / i;
        i = i * 10;
    }
    
    rev = revert(num);
    printf("O numero invertido é: %d\n", rev);

    return 0;
}
