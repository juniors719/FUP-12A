#include <stdio.h>
void vetorFormatado(int vetor[], int len){
    printf("[");
    for(int i = 0; i < len; i++){
        printf("%d", vetor[i]);
        if(i < len - 1) printf(", ");
    }
    printf("]\n");
}
int main(){
    int quantCasos; scanf("%d", &quantCasos);
    for(int i = 0; i < quantCasos; i++){
        int quantElementos; scanf("%d", &quantElementos);
        int vetor[quantElementos];
        for(int j = 0; j < quantElementos; j++) scanf("%d", &vetor[j]);
        vetorFormatado(vetor, quantElementos);
    }
    return 0;
}