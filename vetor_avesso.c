#include <stdio.h>

void avesso(int vet[], int grito, int len){
    for(int i = 0; i < len; i++){
        if(vet[i] == grito){
            // altera o antecesor
            if((i-1)>=0)
                vet[i-1] *= -1;
            // altera o sucessor
            if((i+1)<=len)
                vet[i+1] *= -1;
        }else continue;
    }
    return;
}

void le_vet(int vet[], int len){
    for(int j = 0; j < len; j++){
        scanf("%d", &vet[j]);
    }
    return;
}

void imprime_vet(int vet[], int len){
    for(int i = 0; i < len; i++){
        if(i==0) printf("[");
        printf("%d", vet[i]);
        if(i < (len-1)) printf(" ");
        else printf("]\n");
    }
    return;
}

int main(){
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        int len, grito;
        scanf("%d %d", &len, &grito);
        int operarios[len];
        le_vet(operarios, len);
        avesso(operarios, grito, len);
        imprime_vet(operarios, len);
    }
}