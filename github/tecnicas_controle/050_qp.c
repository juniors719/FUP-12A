#include <stdio.h>
int main(){
    int n,i=1,aux;
    scanf("%d",&n);
    do{
        aux = i*i;
        if(aux==n){
            printf("sim\n");
            break;
        }else if(aux>n){
            printf("nao\n");
            break;
        }
        i++;
    }while (aux<=n);
}