#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int matriz[n][n];
    int maiorCruzamento = 0;
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            int soma = 0;
            for(int auxc = 0; auxc < n; auxc++) if(auxc != c) soma += matriz[l][auxc];
            for(int auxl = 0; auxl < n; auxl++) if(auxl != l) soma += matriz[auxl][c];
            if(soma > maiorCruzamento) maiorCruzamento = soma;
        }
    }
    printf("%d\n", maiorCruzamento);
}