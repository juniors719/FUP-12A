#include <stdio.h>
int main(){
    int n, valorMaior = 0, maiorColuna = 0; scanf("%d", &n);
    int matriz[n][n];
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    for(int c = 0; c < n; c++){
        int valorColuna = 0;
        for(int l = 0; l < n; l++) valorColuna += (matriz[l][c] * matriz[l][c]);
        if(valorColuna > valorMaior){
            maiorColuna = c;
            valorMaior = valorColuna;
        }
    }
    printf("%d\n", maiorColuna);
}