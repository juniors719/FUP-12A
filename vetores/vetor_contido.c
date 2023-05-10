#include <stdio.h>

int main(){
    int qv1; scanf("%d", &qv1);
    int vetor1[qv1];
    for(int i = 0; i < qv1; i++) scanf("%d", &vetor1[i]);
    
    int qv2; scanf("%d", &qv2);
    int vetor2[qv2];
    for(int i = 0; i < qv2; i++) scanf("%d", &vetor2[i]);
    
    // verificar se vetor1 está contido em vetor2
    int flag = 1;
    for(int i = 0; i < qv1; i++){
        for(int j = 0; j < qv2; j++){
            if(vetor2[j] == vetor1[i]){
                flag = 1;
                break;
            }else flag = 0;
        }
        if(!flag){
            printf("nao\n");
            return 0;
        }
    }
    printf("sim\n"); return 0;
}