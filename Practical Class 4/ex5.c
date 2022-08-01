#include <stdio.h>

int main()
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    char car;
    printf("Escreva uma frase (terminando com um ponto final):\n");
    scanf("%c", &car);
    while (car != '.')
    {
        switch (car)
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        case '.':
            break;
        }
        scanf("%c", &car);
    }
    printf ("vogal a:%d\nvogal e:%d\nvogal i:%d\nvogal o:%d\nvogal u:%d\n", a, e, i, o, u);
}
