#include <stdio.h>

void le_vet(int vet[], int len){
    if(!len) return;
    for(int i = 0; i < len; i++)
        scanf("%d", &vet[i]);
    return;
}

void to_cards(int vet[], int len){
    if(!len) return;
    for(int i = 0; i < len; i++){
        if(vet[i] == 1) printf("A");
        else if(vet[i] == 11) printf("J");
        else if(vet[i] == 12) printf("Q");
        else if(vet[i] == 13) printf("K");
        else printf("%d", vet[i]);
        // testa se é o último
        if(i < (len - 1)) printf(", ");
    }
    return;
}

int main(){
    int len;
    scanf("%d", &len);
    int vet[len];
    le_vet(vet, len);
    printf("[");
    to_cards(vet, len);
    printf("]\n");
}