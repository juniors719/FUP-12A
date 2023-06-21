#include <stdio.h>
int main(){
    int matriz[3][3];
    int magicValue = 0;
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    for(int l = 0; l < 3; l++){
        int valorLinha = 0;
        for(int c = 0; c < 3; c++){
            valorLinha += matriz[l][c];
        }
        if(l == 0){
            magicValue = valorLinha;
            continue;
        }
        if(valorLinha != magicValue){
            printf("nao\n");
            return 0;
        }
    }
    printf("sim\n");
}