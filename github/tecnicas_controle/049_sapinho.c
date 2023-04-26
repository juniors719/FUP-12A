#include <stdio.h>
int main(){
    int p,s,e,posicao=0;
    scanf("%d %d %d",&p,&s,&e);
    do{
        printf("%d",posicao);
        posicao+=s;
        if(posicao>=p){
            printf(" saiu\n");
            break;
        }
        printf(" %d\n",posicao);
        posicao-=e;
    }while(posicao<=p);
}