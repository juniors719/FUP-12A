#include <stdio.h>

int verifica_linhas(int *matriz[4][4], int linhas, int colunas){
    int saida;
    for(int i = 0; i < linhas; i++){
        saida = 1;
        for(int j = 0; j < colunas; j++){
            saida *= *matriz[i][j];
        }
        if(saida) return 1;
    }
    return 0;
}

int main(){
    int cartela[4][4] = {
        {1, 9, 27, 23},
        {34, 20, 37, 47},
        {30, 87, 55, 69},
        {13, 60, 99, 66}
    };
    int marcadas[4][4];
    for(int l = 0; l < 4; l++) marcadas[l/4][l%4] = 0;
    
    int q = 0, peda;
    
    for(int i = 0; i < 6; i++){
        scanf("%d", &peda);
        for(int l = 0; l < 4; l++){
            for(int c = 0; c < 4; c++){
                if(peda == cartela[l][c]) q++;
            }
        }
    }
    
    printf("%d\n", q);
}