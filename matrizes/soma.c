#include <stdio.h>
int main(){
    int matriz[2][3];
    int soma = 0;
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 3; c++){
            scanf("%d", &matriz[l][c]);
            soma += matriz[l][c];
        }
    }
    printf("%d\n", soma);
}