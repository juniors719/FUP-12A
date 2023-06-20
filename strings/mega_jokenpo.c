#include <stdio.h>
#include <string.h>

int verifica_vencedor(int jog1, int jog2){
    for(int i = 1; i <= 4; i++){
        if((jog1+i)%9 == jog2) return 1;
    }
    return 0;
}

int main(){
    char escolha1[100]; scanf("%s", escolha1);
    char escolha2[100]; scanf("%s", escolha2);
    int jog1, jog2;
    char opcoes[9][30] = {"rock","fire","scissors","human","sponge","paper","air","water","gun"};
    for(int i = 0; i < 9; i++){
        if(!strncmp(escolha1, opcoes[i], 3)) jog1 = i;
    }
    for(int i = 0; i < 9; i++){
        if(!strncmp(escolha2, opcoes[i], 3)) jog2 = i;
    }
    int w1=0, w2=0;
    w1 = verifica_vencedor(jog1, jog2);
    w2 = verifica_vencedor(jog2, jog1);
    if((w1 && w2) || (!w1 && !w2)) printf("empate\n");
    else if(w1) printf("jog1\n");
    else printf("jog2\n");
}