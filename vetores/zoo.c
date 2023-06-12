#include <stdio.h>

void bubblesort(int *vetor, int tamanho){
    int aux;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho-1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main(){
    int tamanho, quantEspecies = 0;
    scanf("%d", &tamanho);
    int vetor[tamanho];
    int especies[tamanho];
    for(int i = 0; i < tamanho; i++) scanf("%d", &vetor[i]);
    bubblesort(vetor, tamanho);
    for(int i = 0; i < tamanho; i++){
        if(vetor[i+1] != vetor[i]) especies[quantEspecies++] = vetor[i];
    }
    for(int i = 0; i < quantEspecies; i++){
        printf("%d", especies[i]);
        if(i != quantEspecies-1) printf(" ");
        else printf("\n");
    }
}