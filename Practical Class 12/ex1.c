#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fpointer; /* declara variável de ficheiro */
    
    fpointer = fopen("tarefas.txt", "r"); /* abre ficheiro para escrita */
    
    if (fpointer == NULL)  /* se apontador inválido */
    { 
        printf("Impossível criar o ficheiro\n");
        return 1; /* termina */
    }

    int nDias = 0;
    int nTarefasPorDia[30] = {0};
    int nTarefasTerminadasPorDia[30] = {0};
    char tarefaComMaisTrabalhadores[100] = "";
    int maximoNumTrabalhadores = 0;
    
    while (1)
    {
        char name[100];
        if(fscanf(fpointer, "%s", name) < 1) break;

        int nTotalTrabalhadores = 0;
        int dia;
        for(dia = 0; ; dia++)
        {
            int nTrabalhadores;
            fscanf(fpointer, "%d", &nTrabalhadores);
            if(nTrabalhadores == -1) // tarefa foi terminada uma vez que == -1
            {
                nTarefasTerminadasPorDia[dia-1]++;
                break;
            }

            if(dia+1 > nDias)
            {
                nDias = dia+1;
            }

            if(nTrabalhadores)
            {
                nTotalTrabalhadores += nTrabalhadores;
                nTarefasPorDia[dia]++;
            }
        }

        if(nTotalTrabalhadores > maximoNumTrabalhadores)
        {
            maximoNumTrabalhadores = nTotalTrabalhadores;
            strcpy(tarefaComMaisTrabalhadores, name);
        }
    }
    fclose(fpointer);

    int diaComMaisTarefas = 0;
    int diaComMaisTarefasTerminadas = 0;
    int dia;
    for(dia=1; dia < nDias; dia++)
    {
        if(nTarefasPorDia[dia] > nTarefasPorDia[diaComMaisTarefas])
        {
            diaComMaisTarefas = dia;
        }
        if(nTarefasTerminadasPorDia[dia] > nTarefasTerminadasPorDia[diaComMaisTarefasTerminadas])
        {
            diaComMaisTarefasTerminadas = dia;
        }
    }

    printf("Dia com mais tarefas: %d\n", diaComMaisTarefas+1);
    printf("Dia com mais tarefas acabadas: %d\n", diaComMaisTarefasTerminadas+1);
    printf("Tarefa com mais trabalhadores: %s\n", tarefaComMaisTrabalhadores);

    return 0;
}