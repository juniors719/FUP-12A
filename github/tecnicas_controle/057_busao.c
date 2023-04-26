#include <stdio.h>
int main(){
    int c,m,o=0;

    scanf("%d",&c);
    do{
        scanf("%d",&m);
        o+=m;
        if(o<c){
            printf("ainda cabe\n");
        }else if(o==0){
            printf("vazio\n");
        }else if(o==c){
            printf("lotado\n");
        }else{
            printf("hora de partir\n");
        }
    }while(o<=c);
}