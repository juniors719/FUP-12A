#include <stdio.h>

void imprime_vet(int vet[], int len){
    if(vet[0] == 0){
        printf("N\n");
        return;
    }
    for(int i = 0; i < len; i++){
        printf("%d", vet[i]);
        if(i < len - 1) printf(" ");
    }
    printf("\n");
    return;
}

int main(){
    int qAlbum, qBaruel; scanf("%d%d", &qAlbum, &qBaruel);
    int figBaruel[qBaruel], figAlbum[qAlbum];
    int repetidas[qBaruel]; repetidas[0] = 0;
    int faltam[qBaruel]; faltam[0] = 0;
    int r = 0, e, p, f = 0;
    for(int i = 0; i < qBaruel; i++) scanf("%d", &figBaruel[i]);
    for(int i = 0; i < qAlbum; i++) figAlbum[i] = i + 1; 
    for(int i = 0; i < qAlbum; i++){
        e = 0;
        p = 0;
        for(int j = 0; j < qBaruel; j++){
            if(e && figAlbum[i] == figBaruel[j]){
                repetidas[r] = figBaruel[j];
                r++;
            }else if(figAlbum[i] == figBaruel[j]){
                e = 1;
                p = 1;
            }
        }
        if(!p){
            faltam[f] = figAlbum[i];
            f++;
        }
    }
    imprime_vet(repetidas, r);
    imprime_vet(faltam, f);
    return 0;
}