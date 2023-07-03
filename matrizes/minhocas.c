#include <stdio.h>
int main(){
    int numLinhas, numColunas, maiorQuant = 0;
    scanf("%d %d", &numLinhas, &numColunas);
    int campo[numLinhas][numColunas];
    for(int l = 0; l < numLinhas; l++){
        int somaLinha = 0;
        for(int c = 0; c < numColunas; c++){
            scanf("%d", &campo[l][c]);
            somaLinha += campo[l][c];
        }
        if(somaLinha > maiorQuant) maiorQuant = somaLinha;
    }
    // verificar as colunas
    for(int c = 0; c < numColunas; c++){
        int somaColuna = 0;
        for(int l = 0; l < numLinhas; l++) somaColuna += campo[l][c];
        if(somaColuna > maiorQuant) maiorQuant = somaColuna;
    }
    printf("%d\n", maiorQuant);
}