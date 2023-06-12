#include <stdio.h>
int main(){
    int quantPosicoes, tamSeq;
    scanf("%d %d", &quantPosicoes, &tamSeq);
    int cofre[quantPosicoes];
    int digitos[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < quantPosicoes; i++) scanf("%d", &cofre[i]);
    for(int i = 0; i < tamSeq; i++){
        int leitura, init, goal;
        scanf("%d", &leitura);
        if(i == 0){
            digitos[cofre[leitura-1]]++;
            init = leitura-1;
            continue;
        }
        else{
            goal = leitura-1;
            if(init < goal){
                for(int j = init+1; j <= goal; j++) digitos[cofre[j]]++;
            }
            else{
                for(int j = init-1; j >= goal; j--) digitos[cofre[j]]++;
            }
            init = goal;
        }
    }
    printf("[");
    for(int i = 0; i < 10; i++) printf(" %d", digitos[i]);
    printf(" ]\n");
}