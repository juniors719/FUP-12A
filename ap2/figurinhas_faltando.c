#include <stdio.h>

int existe(int vetor[], int len, int valor){
    for(int i = 0; i < len; i++){
        if(valor == vetor[i]) return 1;
    }
    return 0;
}

int main(){
    int qAlbum, qJoao, qSobrando = 0;
    scanf("%d %d", &qAlbum, &qJoao);
    int figJoao[qJoao];
    int sobrando[qAlbum];
    for(int i = 0; i < qJoao; i++) scanf("%d", &figJoao[i]);
    
    for(int i = 1; i <= qAlbum; i++){
        if(!existe(figJoao, qJoao, i)) sobrando[qSobrando++] = i;
    }
    
    if(qSobrando){
        for(int i = 0; i < qSobrando; i++){
            printf("%d", sobrando[i]);
            if(i < qSobrando - 1) printf(" ");
            else printf("\n");
        }
    }else{
        printf("nenhum\n");
    }
}