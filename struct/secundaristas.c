#include <stdio.h>

typedef struct al
{
    char nome[100];
    float n1, n2, n3, media;
} aluno;

void bubble_sort (aluno vetor[], int n) {
    aluno aux;
    for (int k = n - 1; k > 0; k--) {
        for (int j = 0; j < k; j++) {
            if (vetor[j].media < vetor[j + 1].media) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){
    int quantAlunos;
    scanf("%d", &quantAlunos);
    aluno listaAlunos[quantAlunos]; 
    for(int i = 0; i < quantAlunos; i++){
        scanf(" %[^\n]s", listaAlunos[i].nome);
        scanf("%f %f %f", &listaAlunos[i].n1, &listaAlunos[i].n2, &listaAlunos[i].n3);
        listaAlunos[i].media = (listaAlunos[i].n1 + listaAlunos[i].n2 + listaAlunos[i].n3)/3;
    }
    bubble_sort(listaAlunos, quantAlunos);
    for(int i = 0; i < quantAlunos; i++){
        printf("%d: %s\n", i, listaAlunos[i].nome);
        printf("   Media: %.2f\n", listaAlunos[i].media);
        printf("   N1: %.2f, N2: %.2f, N3: %.2f\n", listaAlunos[i].n1, listaAlunos[i].n2, listaAlunos[i].n3);
    }
}