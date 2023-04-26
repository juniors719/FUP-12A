#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    if(n>0){
        printf("positivo\n");
    }else if(n<0){
        printf("negativo\n");
    }else{
        printf("nulo\n");
    }
}