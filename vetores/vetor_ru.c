#include <stdio.h>

void le_vet(int vet[], int len){
    for(int i = 0; i < len; i++){
        scanf("%d", &vet[i]);
    }
    return;
}

void imprime_vet(int vet[], int len){
    for(int i = 0; i < len; i++){
        printf(" %d", vet[i]);
    }
    return;
}

// void ordena_vetor(int vetor[], int n) {
//     int k, j, aux;
//     for (k = n - 1; k > 0; k--) {
//         for (j = 0; j < k; j++) {
//             if(vetor[j] > vetor[j + 1]) {
//                 aux = vetor[j];
//                 vetor[j] = vetor[j + 1];
//                 vetor[j+1] = aux;
//             }
//         }
//     }
// }

int main(){
    int qPessoas = 0, qI = 0, qP = 0;
    scanf("%d", &qPessoas);
    int fila[qPessoas], pares[qPessoas], impares[qPessoas];
    le_vet(fila, qPessoas);
    for(int i = 0; i < qPessoas; i++){
        if(fila[i] % 2 == 0){
            pares[qP] = fila[i];
            qP++;
        }else{
            impares[qI] = fila[i];
            qI++;
        }
    }
    printf("["); imprime_vet(impares, qI); printf(" ]\n");
    printf("["); imprime_vet(pares, qP); printf(" ]\n");
    return 0;
}