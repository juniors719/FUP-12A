#include <stdio.h>
int main(){
    int p,s,e,posicao=0;
    scanf("%d %d %d",&p,&s,&e);
    while((posicao<=p)||(posicao>=0)){
        printf("%d",posicao);
        posicao+=s;
        if(posicao>=p){
            printf(" saiu\n");
            break;
        }
        if(posicao<0){
            printf(" morreu\n");
            break;
        }
        printf(" %d\n",posicao);
        posicao-=e;
        s-=10;
    }
}