#include <stdio.h>
int main(){
    int a,b,res=0,i;
    scanf( "%d%d",&a,&b);
    if(b>=a){
        for(i=a;i<=b;i++){
            if(i%2==0)
                res=res+i;
        }
        printf("%d\n",res);
    }else
        printf("invalido\n");
}