#include <stdio.h>

int main()
{
    int i,j;
    double alunos[4][4];
    for (i=0 ; i<4 ; i++)
    {
        printf ("Dados do aluno %d:\n", i+1);
        scanf("%lf %lf %lf",&alunos[i][0], &alunos[i][1], &alunos[i][2]); 
    }
    for (j=0 ; j<4 ; j++)
        alunos[j][3] = (alunos[j][1] + alunos[j][2]) / 2;
    printf("Numero       Nota 1       Nota2          Media\n");
    printf("0%.0f          %.0f           %.0f             %.1f\n", alunos[0][0], alunos[0][1], alunos[0][2], alunos[0][3]);
    printf("%.0f         %.0f           %.0f             %.1f\n", alunos[1][0], alunos[1][1], alunos[1][2], alunos[1][3]);
    printf("%.0f         %.0f           %.0f             %.1f\n", alunos[2][0], alunos[2][1], alunos[2][2], alunos[2][3]);
    printf("%.0f          %.0f           %.0f              %.1f\n", alunos[3][0], alunos[3][1], alunos[3][2], alunos[3][3]);
    return 0;
}