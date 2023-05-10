#include <stdio.h>

void le_vet(int vet[], int len){
    for(int i = 0; i < len; i++){
        scanf("%d", &vet[i]);
    }
}

int check_order(int vet[], int len){
    for(int i = 0; i < len; i++){
        int p = i+1;
        if(p < len){
            if(vet[i] > vet[p])
                return 0;
        }
    }
    return 1;
}

int main(){
    int len; scanf("%d", &len);
    int dominos[len];
    le_vet(dominos, len);
    if(check_order(dominos, len)){
        printf("ok\n");
    }else{
        printf("precisa de ajuste\n");
    }
}