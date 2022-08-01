#include <stdio.h>
int compacta (char orig[], int N, char dst[]){
    int i=0, j=1;
    dst[0]=orig[0];
    for (i = 1; i<=N; i++){
        if (orig[i]!=orig[i+1] && dst[j]!=orig[i]){
            dst[j]=orig[i];
            j++;
        }
    }
    for (i=0; i<N; i++){
        printf("%c", dst[i]);}
    printf("}\n");
    return j;
}
void preencher_vetor(char orig[], int N){
    int i;
    for (i=0; i<10; i++){
        printf("Introduza o elemento %d:\n", i+1);
        scanf ("%s", &orig[i]);
        N++;
        }
}
int main (){
    char orig[10], new[10];
    int N=10, N2, i;
    preencher_vetor(orig, N); 
    for (i=0; i<N; i++){
        new[i]=0;}
    N2=compacta(orig, N, new);
    printf("%d\n", N2);
return 0;}