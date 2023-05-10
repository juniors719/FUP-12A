#include <stdio.h>

void sort_vector(int vet[]) {
    int k, j, aux;
    for (k = 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if(vet[j] > vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}


int main(){
    
    int qCasas, qCaminhoes; scanf("%d%d", &qCasas, &qCaminhoes);
    int casas[qCasas];
    
    // zerando o valor de água das casas
    for(int i = 0; i < qCasas; i++) casas[i] = 0;
    
    for(int i = 0; i < qCaminhoes; i++){
        int rota[2], qAgua;
        scanf("%d %d %d", &rota[0], &rota[1], &qAgua);
        // função para ordenar o vetor
        sort_vector(rota);
        // percorrendo a rota
        for(int i = rota[0]; i <= rota[1]; i++){
            casas[i] += qAgua;
        }
    }
    for(int i = 0; i < qCasas; i++){
        printf("%d", casas[i]);
        if(i < (qCasas-1)) printf(" ");
    }
    printf("\n"); return 0;
    
}