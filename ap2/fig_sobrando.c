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
    int n; scanf("%d", &n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    bubblesort(v, n);
    int sobrando = 0, printou = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == v[i+1]){
            sobrando++;
        }else{
            if(sobrando > 0){
                printf("%d %d\n", v[i], sobrando);
                printou = 1;
            }
            sobrando = 0;
        }
    }
    if(!printou) printf("nenhum\n");
}