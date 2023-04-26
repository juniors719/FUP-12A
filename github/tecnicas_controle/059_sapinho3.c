#include <stdio.h>
int verificapoco(int s, int e, int p){
    int posicao = 0;
    while((posicao<=p)||(posicao>=0)){
        posicao+=s;
        if(posicao>=p)
            return 0;
        if(posicao<0)
            return 1;
        posicao-=e;
        s-=10;
    }
}
int main(){
    int p,s=1,e,posicao=0;
    scanf("%d %d",&p,&e);
    while(verificapoco(s, e, p)){
        s++;
    }
    printf("%d\n",s);
}

